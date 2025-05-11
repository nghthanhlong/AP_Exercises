#include<iostream>

using namespace std;

int main(){
    int m; cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || i==m || j==i || i==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}