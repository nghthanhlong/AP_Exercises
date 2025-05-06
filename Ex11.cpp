//Given an array length n, determine whether there is duplicate num
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; cin>>n;
    vector<bool> seen(n+1, false);
    bool found=false;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(seen[x]){
            found=true;
            break;
        }
        seen[x]=true;
    }
    cout<<(found ? "Yes" : "No");
}