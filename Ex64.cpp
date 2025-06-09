#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> mp;
    int x;
    while(cin>>x){
        mp[x]++;
    }
    int maxFreq=0, result;
    for(auto &m : mp){
        int number=m.first;
        int count=m.second;
        if(count>maxFreq){
            maxFreq=count;
            result=number;
        }
        else if(count==maxFreq && number<result){
            result=number;
        }
    }
    cout<<result;
}
