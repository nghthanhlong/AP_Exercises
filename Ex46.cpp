#include<iostream>

using namespace std;

int main(){
    int n; cin>>n;
    for(int a=1; a<=n; a++){
        for(int b=1; b<=n; b++){
            for(int c=1; c<=n; c++){
                for(int d=1; d<=n; d++){
                    for(int e=1; e<=n; e++){
                        if(n*n*n*n*n==a*a*a*a*a + b*b*b*b*b + c*c*c*c*c + d*d*d*d*d + e*e*e*e*e){
                            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" ";
                        }
                    }
                }
            }
        }
    }
}