#include<bits/stdc++.h>
using namespace std;
int x[15],n,k;
void in(){
    for(int i=1;i<=k;i++)
        cout<<char('A'+x[i]-1);
    cout<<endl;
}
void ql(int i,int bd){
    for(int j=bd+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k)in();
        else ql(i+1,j);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        ql(1,0);
    }
}
