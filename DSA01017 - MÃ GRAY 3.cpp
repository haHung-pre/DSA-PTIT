C1:#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
    	string res(1,s[0]);
    	for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1])
            res.push_back('1');
        else
            res.push_back('0');
    }
    cout<<res;
        cout<<endl;
    }
}



C2:#include<iostream>
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
