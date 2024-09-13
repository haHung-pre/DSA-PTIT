#include<bits/stdc++.h>
using namespace std;
int n,s=0,a[102],x[102],ok=0;
void ql(int i,int bd,int sum){
   if(ok)
      return;
   for(int j=bd;j<=n;j++){
      if(sum+a[j]<=s){
         x[i]=a[j];
         if(sum+a[j]==s){
            ok=1;
            //return; 
         }
         else
            ql(i+1,j+1,sum+a[j]);
      }
   }
}
int main(){
   int t;cin>>t;
   while(t--){
      s=0;
      ok=0;
      cin>>n;
      for(int i=1;i<=n;i++){
         cin>>a[i];
         s+=a[i];
      }
      if(s%2==1){
         cout<<"NO\n";
         continue;
      }
      s/=2;
      sort(a+1,a+n+1);
      ql(1,1,0);
      if(ok==0){
         cout<<"NO\n";
      }
      else{
         cout<<"YES\n";
      }
   }
}
