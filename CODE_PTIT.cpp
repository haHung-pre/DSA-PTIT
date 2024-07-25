#include<iostream>
using namespace std;
int n,a[1005],final=0;
void ktao(){
   for(int i=1;i<=n;i++){
      a[i]=0;
   }
}
void sinh(){
   int i=n;
   while(i>=1&&a[i]==1){
      a[i]=0;
      i--;
   }
   if(i==0) final=1;
   else{
      a[i]=1;
   }
}
bool check(){
   int l=0,r=n+1;
   while(l<=r){
      if(a[l++]!=a[r--]){
         return false;
      }
   }
   return true;
}
void out(){
   for(int i=1;i<=n;i++){
      cout<<a[i]<<" ";
   }
   cout<<endl;
}
int main(){
   cin>>n;
   ktao();
   final=0;
   while(final==0){
      if(check()){
         out();
      }
      sinh();
   }
}