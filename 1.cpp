#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,s,m;cin>>n>>s>>m;
        if(n*(s-s/7)<m*s)cout<<"-1\n";
        else cout<<(m*s+n-1)/n<<endl;
    }
}
