#include<iostream>
#include<cstring>
using namespace std;

bool check(char s[]){
    int len=strlen(s);
    for(int i=0; i<len; i++){
        if(s[i]!=s[len-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    char s[100];
    cin>>s;
    cout<<(check(s) ? "Yes" : "No");
    return 0;
}