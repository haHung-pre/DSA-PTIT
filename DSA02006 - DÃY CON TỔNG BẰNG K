#include<bits/stdc++.h>
using namespace std;
int n,k,a[105],x[105];
void ql(int i,int bd,int sum){
   for(int j=bd;j<=n;j++){
      x[i]=a[j];
      if(sum+a[j]==k){
         cout<<"[";
         for(int u=1;u<=i;u++){
            cout<<x[u];
            if(u<i)
               cout<<" ";
         }
         cout<<"]";
         cout<<" ";
      }
      else if(sum+a[j]<k)
         ql(i+1,j+1,sum+a[j]);
   }
}
int main(){
   int t;cin>>t;
   while(t--){
      cin>>n>>k;
      for(int i=1;i<=n;i++){
         cin>>a[i];
      }
      sort(a+1,a+n+1);
      ql(1,1,0);
      cout<<endl;
   }
}
