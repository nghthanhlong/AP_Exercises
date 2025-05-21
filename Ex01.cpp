//Spiral matrix
#include<iostream>
using namespace std;

int main(){
    int m, n; cin>>m>>n;
    int val=1;
    int a[m][n];
    int top=0, left=0, bottom=m-1, right=n-1;
    while(left<=right && top<=bottom){
        for(int i=left; i<=right; i++){
            a[top][i]=val++;
        }
        top++;
        for(int i=top; i<=bottom; i++){
            a[i][right]=val++;
        }
        right--;
        if(top<=bottom){
            for(int i=right; i>=left; i--){
                a[bottom][i]=val++;
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom; i>=top; i--){
                a[i][left]=val++;
            }
            left++;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
