#include<iostream>
#include<string>

using namespace std;

string addBigNum(string a, string b){
    int lenA=a.size(), lenB=b.size();
    while(lenA!=lenB){
        if(lenA<lenB) {
            a='0'+a;
            lenA++;
        }
        if(lenB<lenA){
            b='0'+b;
            lenB++;
        }
    }
    string res="";
    int carry=0;
    for(int i=lenA-1; i>=0; i--){
        int digit=((a[i]-'0')+(b[i]-'0')+carry)%10;
        res=to_string(digit)+res;
        carry=((a[i]-'0')+(b[i]-'0')+carry)/10;
    }
    if(carry) {
        res=to_string(carry)+res;
    }
    return res;
}

string multiplyInteger(string a,int b){
    int len=a.size();
    int carry=0;
    string res="";
    for(int i=len-1; i>=0; i--){
        int digit=((a[i]-'0')*b+carry)%10;
        res=to_string(digit)+res;
        carry=((a[i]-'0')*b+carry)/10;
    }
    if(carry>0){
        res=to_string(carry)+res;
    }
    return res;
}

string multiplyBigNum(string a, string b){
    string res="";
    int lenB=b.size();
    for(int i=lenB-1; i>=0 ;i--){
        string temp=multiplyInteger(a, b[i]-'0');
        temp.append(lenB-1-i, '0');
        res=addBigNum(res, temp);
    }
    return res;
}

int main(){
    string a; int b;
    cin>>a>>b;
    cout<<multiplyInteger(a,b);
}
