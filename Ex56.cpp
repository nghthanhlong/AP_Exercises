/*
Sort the odd number ascending, the even stay the same
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
    }
    for(int i=0; i<(int)a.size(); i++){
        for(int j=i+1; j<(int)a.size(); j++){
            if(a[i]%2==1 && a[j]%2==1 && a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    for(auto &x:a){
        cout<<x<<" ";
    }
}