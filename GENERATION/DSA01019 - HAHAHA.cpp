#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    int n=s.size();
    if(s[0]!='H'||s[n-1]!='A')
        return 0;
    for(int i=0;i<n-1; i++){
        if (s[i]=='H'&&s[i+1]=='H')
            return 0;
    }
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        for(int i=0;i<n;i++)
            s+='A';
        while(1){
            if(check(s))
                cout<<s<<endl;
            int ok=0;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='A'){
                    ok=1;
                    s[i]='H';
                    for (int j=i+1;j<n;j++)
                        s[j]='A';
                    break;
                }
            }
            if(ok==0)
                break;
        }
    }
}
