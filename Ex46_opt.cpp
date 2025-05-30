#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<long long> power5(n+1);
    unordered_map<long long, int> map;

    for(int i=1; i<=n; i++){
        power5[i]=1LL*i*i*i*i*i;
        map[power5[i]]=i;
    }

    for(int a=1; a<=n;a++){
        for(int b=a; b<=n; b++){
            for(int c=b; c<=n; c++){
                for(int d=c; d<=n;d++){
                    long long sum=power5[a]+power5[b]+power5[c]+power5[d];
                    if(map.count(sum)==1){
                        int e=map[sum];
                        cout << a << "^5 + " << b << "^5 + " << c << "^5 + " << d << "^5 = " << e << "^5" << endl;
                    }
                }
            }
        }
    }
}