#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct Complex {
    int a; 
    int b;
    Complex(): a(0), b(0) {}
    Complex(int _a, int _b){
        a=_a;
        b=_b;
    }
    double abs() {
        return sqrt(a*a+b*b);
    }
    
    void print() {
        if(a==0 && b==0) cout<<0<<endl;
        else if(a==0) cout<<b<<"i"<<endl;
        else if(b==0) cout<<a<<endl;
        else{
            if(b==1) cout<<a<<"+i\n";
            else if(b==-1) cout<<a<<"-i\n";
            else {
                if(b>0) cout<<a<<"+"<<b<<"i\n";
                else cout<<a<<b<<"i\n";
            }
        }
    }
};

Complex add(Complex a, Complex b) {
    int newA=a.a+b.a;
    int newB=a.b+b.b;
    Complex res = {newA, newB};
    return res;
}

int main(){
    Complex first, second;
    cin>>first.a>>first.b>>second.a>>second.b;
    first.print();
    second.print();
    cout<<fixed<<setprecision(2)<<first.abs()<<endl;
    cout<<fixed<<setprecision(2)<<second.abs()<<endl;
    Complex sum=add(first, second);
    sum.print();
    return 0;
}