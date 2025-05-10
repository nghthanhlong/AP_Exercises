/*
- Print prime numbers from the array
- To print distinct numbers, create a set primeSet, when selecting primes just insert to a set. The order is ascending
- To print distinct numbers but follow the order of input, make a res vector to keep the order and an unordered set to ensure uniqueness.
  Then when selecting prime, if not find it before, push back the number, and insert the number to the set
*/
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool checkPrime(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
        if(checkPrime(x)){
            cout<<x<<" ";
        }
    }
}