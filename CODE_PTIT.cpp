#include<iostream>
using namespace std;
int n,k,a[30],x[30],final=0;
void ktao(){
   cin>>n>>k;
   for(int i=1;i<=n;i++){
      a[i]=0;
   }
}
void sinh(){
   int i=n;
   while(i>0&&a[i]==1){
      a[i]=0;
      i--;
   }
   if(i==0) final=1;
   else{
      a[i]=1;
   }
}
int check(){
   int sum=0;
   for(int i=1;i<=n;i++){
      sum+=a[i];
   }  
   return sum==k;
}
int main(){
   int t;cin>>t;
   while(t--){
      ktao();
      final=0;
      while(final==0){
         if(check()){
         for(int i=1;i<=n;i++){
            cout<<a[i];
         }
         cout<<endl;
         }
         sinh();
      }
   }
}