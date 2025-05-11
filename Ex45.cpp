#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string decimal_to_binary(long number){
    string res="";
    long temp=number;
    while(temp!=0){
        int remainder=temp%2;
        res=to_string(remainder)+res;
        temp/=2;
    }
    return res;
}

int binary_to_decimal(string bin){
    int res=0;
    int n=bin.size();
    for(int i=n-1; i>=0; i--){
        res+=(bin[n-i-1]-'0')*pow(2,i);
    }
    return res;
}

int main(){
    string s; cin>>s;
    cout<<binary_to_decimal(s);
}