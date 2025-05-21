//Minesweeper
#include<iostream>
using namespace std;
const int MAX=500;

int checkMines(char a[MAX][MAX], int m, int n, int i, int j){
    int cnt=0;
    for(int di=-1; di<=1; di++){
        for(int dj=-1; dj<=1; dj++){
            int ni=i+di;
            int nj=j+dj;
            if(ni>=0 && ni<m && nj>=0 && nj<n){
                if(di!=0 || dj!=0){
                    if(a[ni][nj]=='*'){
                        cnt++;
                    }
                }
            }
        }
    }
    return cnt;
}

int main(){
    int m, n; cin>>m>>n;
    char a[MAX][MAX];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]=='*'){
                cout<<"* ";
            }
            else{
                cout<<checkMines(a, m, n, i, j)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
