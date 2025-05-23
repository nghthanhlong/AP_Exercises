#include<iostream>
#include<vector>

using namespace std;

const int MAX=500;

bool isPeak(int a[MAX][MAX], int m, int n, int i, int j){
    for(int di=-1; di<=1; di++){
        for(int dj=-1; dj<=1; dj++){
            if(abs(di)+abs(dj)>1 || (di==0 && dj==0)) continue;
            int ni=i+di;
            int nj=j+dj;
            if(ni>=0 && ni<m && nj>=0 && nj<n){
                if(a[ni][nj]>=a[i][j]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    int m, n; cin>>m>>n;
    int a[MAX][MAX];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(isPeak(a, m,n, i, j)){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}