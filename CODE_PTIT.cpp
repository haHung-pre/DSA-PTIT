#include<iostream>
#include<vector>
using namespace std;
#define pb push_back
int n,k,x[100],ok;
vector<char>v;
void init(){
    v.clear();
    ok=1;
    cin>>n>>k;
    v.pb('@');
    for(int i=1;i<=n;i++){
        v.pb(i+64);
        x[i]=i;
    }
}
void next(){
    int i=k;
    while(i>0&&x[i]==n-k+i)i--;
    if(!i)ok=0;
    else{
        x[i]++;
        for(int j=i+1;j<=k;j++)
            x[j]=x[j-1]+1;
    }
}
void out(){
    for(int i=1;i<=k;i++)
        cout<<v[x[i]];
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        init();
        while(ok){
            out();
            next();
        }
    }
}