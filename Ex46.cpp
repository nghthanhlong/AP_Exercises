#include<iostream>

using namespace std;

int main(){
    int n; cin>>n;
    for(int a=1; a<=n; a++){
        long long a5=1LL * a*a*a*a*a;
        for(int b=a; b<=n; b++){
            long long b5=1LL*b*b*b*b*b;
            for(int c=b; c<=n; c++){
                long long c5=1LL*c*c*c*c*c;
                for(int d=c; d<=n;d++){
                    long long d5=1LL*d*d*d*d*d;
                    long long sum=a5+b5+c5+d5;
                    for(int e=1; e<=n; e++){
                        long long e5=1LL*e*e*e*e*e;
                        if(sum==e5){
                            cout << a << "^5 + " << b << "^5 + " << c << "^5 + " << d << "^5 = " << e << "^5" << endl;
                        }
                    }
                }
            }
        }
    }
}