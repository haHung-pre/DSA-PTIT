#include<iostream>
using namespace std;
int t,n,k,x[1001];
void prev(){
    int i=k;
    while(i&&x[i-1]+1==x[i])i--;
    if(i){
        x[i]--;
        for(int j=i+1;j<=k;j++)x[j]=n-k+j;
        for(int i=1;i<=k;i++)cout<<x[i]<<" ";
    }
    else
        for(int j=1;j<=k;j++)cout<<j+k-1<<" ";
}
int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=k;i++)cin>>x[i];
        prev();
        cout<<endl;
    }
}