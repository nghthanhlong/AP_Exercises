#include<iostream>
#include<vector>

using namespace std;

bool checksubSequence(vector<int> &a, vector<int> &b, int m, int n){
    bool match=true;
    for(int i=0; i<=m-n; i++){
        for(int j=0; j<n-1; j++){
            if(a[j]!=b[i+j]){
                match=false;
                break;
            }
        }
        if(match) return true;
    }
    return false;
}

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m; cin>>m;
    vector<int> b(m);
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    cout<< (checksubSequence(a,b,m,n) ? "YES" : "NO");
}
