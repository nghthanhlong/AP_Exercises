#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a;
    int x;
    while(cin>>x){
        a.push_back(x);
    }
    int n=a.size();
    vector<int> freq(n, 0);
    for(int i=0; i<n;  i++){
        freq[a[i]]++;
    }
    int maxFreq=0, minNum=0;
    for(int i=0; i<n; i++){
        if(freq[a[i]]>maxFreq || (freq[a[i]]==maxFreq && a[i]<minNum)){
            maxFreq=freq[a[i]];
            minNum=a[i];
        }
    }
    cout<<minNum;
}