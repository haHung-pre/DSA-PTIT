#include<bits/stdc++.h>
using namespace std;
int n,a[15],final=0;
void ktao(){
   for(int i=1;i<=n;i++){
      a[i]=n-i+1;
   }
}
void sinh(){
   int i=n-1;
   while(i>0&&a[i]<a[i+1]){
      i--;
   }
   if(i==0) final=1;
   else{
      int j=n;
      if(a[i]<a[j])j--;
      swap(a[i],a[j]);
      reverse(a+1+i,a+1+n);
   }
}
int main(){
   int t;cin>>t;
   while(t--){
      cin>>n;
      ktao();
      final=0;
      while(final==0){
         for(int i=1;i<=n;i++){
            cout<<a[i];
         }
         cout<<" ";
         sinh();
      }
      cout<<endl;
   }
}
