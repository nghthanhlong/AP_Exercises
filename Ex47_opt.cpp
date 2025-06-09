#include<iostream>

using namespace std;

int main(){
    int n; cin>>n;
    long long a=0, b=1;
    cout<<a<<" ";
    for(int i=2; i<=n; i++){
        long long c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
