#include<iostream>
#include<map>
#include<cmath>

bool checkPrime(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

using namespace std;

int main(){
    int n; cin>>n;
    map<int, int> mp;
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            mp[i]++;
            n/=i;
        }
    }
    if(n>1) mp[n]++;
    for(auto &it : mp) {
        cout<<it.first<<" "<<it.second<<endl;
    }
}