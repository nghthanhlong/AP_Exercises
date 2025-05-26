#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

bool checkValidWord(string s){
    return s.size()>=2 && isupper(s[0]);
}

int countValidWord(string s){
    int cnt=0, len=s.size(), i=0;
    while(i<len){
        while(i<len && isspace(s[i])){
            i++;
        }
        if(i>=len) break;

        int start=i;
        while(i<len && !isspace(s[i])){
            i++;
        } 
        string word=s.substr(start, i-start);
        if(checkValidWord(word)){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string input_file; cin>>input_file;
    ifstream file (input_file);
    int n; file>>n;
    file.ignore();
    while(n--){
        string line; 
        getline(file, line);
        
        //file.ignore();
        cout<<countValidWord(line)<<endl;
    }
    return 0;
}