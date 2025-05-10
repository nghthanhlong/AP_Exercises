#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);
    vector<bool> check(10, false);
    for(auto i=0; i<n; i++){
        cin>>a[i];
        check[a[i]]=true;
    }
    bool found=false;
    for(int i=0; i<check.size(); i++){
        if(check[i]==false){
            cout<<i<<" ";
            found=true;
        }
    }
    if(found==false) cout<<"None";
}