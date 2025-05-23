#include<iostream>

using namespace std;

const int MAX=100;

int main(){
    int n; cin>>n;
    int a[MAX][MAX]={0};
    for(int i=0; i<n+1; i++){
        a[i][0]=1;
        for(int j=1; j<=i; j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}