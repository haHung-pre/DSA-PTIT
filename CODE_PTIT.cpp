#include<iostream>
using namespace std;
int n,k,a[1005],final=0,c=0,x[1005];
void ktao(){
   for(int i=1;i<=n;i++){
      cin>>a[i];
      x[i]=0;
   }
}
void sinh(){
   int i=n;
   while(i>=1&&x[i]==1){
      x[i]=0;
      i--;
   }
   if(i==0) final=1;
   else x[i]=1;
}
bool check(){
   int sum=0;
   for(int i=1;i<=n;i++){
      if(x[i]){
         sum+=a[i];
      }
   }
   return sum==k;
}
void out(){
   for(int i=1;i<=n;i++){
      if(x[i]){
         cout<<a[i]<<" ";
      }
   }
   cout<<endl;
}
int main(){
   cin>>n>>k;
   ktao();
   final=0;
   while(final==0){
      if(check()){
         out();
         c++;
      }
      sinh();
   }
   cout<<c;
}