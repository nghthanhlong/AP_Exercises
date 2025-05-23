#include<iostream>
#include<vector>
using namespace std;

int countMines(const vector<vector<char>> &a, int m, int n, int i, int j){
    int cnt=0;
    for(int di=-1; di<=1; di++){
        for(int dj=-1; dj<=1; dj++){
            if(di==0 && dj==0) continue;
            int ni=i+di;
            int nj=j+dj;
            if(ni>=0 && ni<m && nj>=0 && nj<n){
                if(a[ni][nj]=='M'){
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main(){
    int m, n, k;
    cin>>m>>n>>k;
    vector<vector<char>> a(m, vector<char> (n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    vector<vector<bool>> open(m, vector<bool> (n, false));
    while(k--){
        int x, y; cin>>x>>y;
        if(a[x][y]=='M') {
            cout<<"YOU'RE DEAD!\n";
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cout<<a[i][j];
                }
                cout<<endl;
            }
            return 0;
        }
        else{
            open[x][y]=true;
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    if(open[i][j]) {
                        cout<<countMines(a, m, n, i, j)<<" ";
                    }
                    else{
                        cout<<-1<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
}