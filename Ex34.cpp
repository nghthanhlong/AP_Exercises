#include<iostream>
#include<set>

using namespace std;

bool uniqueDigit(int n){
    set<int> s;
    int temp=n;
    while(temp!=0){
        int digit=temp%10;
        if(s.find(digit)!=s.end()){
            return false;
        }
        s.insert(digit);
        temp/=10;
    }
    return true;
}

int find(int l, int r){
    for(int i=l; i<=r; i++){
        if(uniqueDigit(i)){
            return i;
        }
    }
    return -1;
}

int main(){
    int l, r; cin>>l>>r;
    cout<<find(l,r);
}