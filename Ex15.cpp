//Delete character in a strong
#include<iostream>
#include<cstring>
using namespace std;

void delete_char(char *s, char c){
    int i=0, j=0;
    while(s[i]!='\0'){
        if(s[i]!=c){
            s[j]=s[i];
            j++;
        }
        i++;
    }
    s[j]='\0';
}

int main(){
    char s[100];
    cin.getline(s,100);
    char c; cin>>c;
    delete_char(s, c);
    cout<<s;
}