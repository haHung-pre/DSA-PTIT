#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        vector<int>v;
        for(char x:s)v.pb(x-'0');
        vector<int> res(v.size(),0);
        res[0]=v[0];
        for(int i=1;i<v.size();i++){
            res[i]=v[i]^v[i-1];
        }
        for(int x:res)cout<<x;
        cout<<endl;
    }
}