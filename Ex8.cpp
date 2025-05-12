#include<iostream>

using namespace std;

int main(){
    int n; cin>>n;
    int a[500][500]={0};
    int row=0, col=n/2;
    int val=1;
    
    while(val<=n*n){
        a[row][col]=val++;
        int nextCol=(col+1)%n;
        int nextRow=(row-1+n)%n;
        if(a[nextRow][nextCol]!=0){
            row=(row+1)%n;
        }
        else{
            row=nextRow;
            col=nextCol;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}