#include<iostream>
using namespace std;
int n,k,a[1005],final=0;
void ktao(){
     cin>>n>>k;
     for(int i=1;i<=k;i++){
          a[i]=i;
     }
}
void sinh(){
     int i=k;
     while(i>=1&&a[i]==n-k+i){
          i--;
     }
     if(i==0) final=1;
     else{
          a[i]++;
          for(int j=i+1;j<=k;j++){
               a[j]=a[j-1]+1;
          }
     }
}
int main(){
    int t;cin>>t;
     while(t--){
          final=0;
          ktao();
          while(final==0){
          for(int i=1;i<=k;i++){
               cout<<a[i];
          }
          cout<<" ";
          sinh();
     }
     cout<<endl;
     }
}