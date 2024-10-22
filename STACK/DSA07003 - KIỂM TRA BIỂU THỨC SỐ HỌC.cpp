#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    stack<char>st;
    for(char c:s){
        if(c>='a'&&c<='z')continue;
        if(c!=')')st.push(c);
        else{
            if(st.empty()||st.top()=='(')
                return 1;
            while(st.size()&&st.top()!='(')
                st.pop();
        }
    }
    return 0;
}
int main(){
    int t;cin>>t;
    scanf("\n");
    while(t--){
        string s;getline(cin,s);
        if(check(s))cout<<"Yes\n";
        else cout<<"No\n";
    }
}
