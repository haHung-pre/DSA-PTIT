#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int check(string s){
    if(s[0]!='H'||s[s.length()-1]!='A')return 0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='H'&&s[i+1]=='H')
            return 0;
    }
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string a="H",b="A";
        queue<string>q;
        q.push(a),q.push(b);
        vector<string>v;
        while(1){
            string top=q.front();q.pop();
            if(top.size()>n)break;
            if(top.size()==n&&check(top))
                v.push_back(top);
            q.push(top + a);
            q.push(top + b);
        }
        sort(v.begin(),v.end());
        for(string x:v)cout<<x<<endl;
    }
}
