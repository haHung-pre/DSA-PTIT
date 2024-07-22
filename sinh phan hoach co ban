#include<iostream>
using namespace std;
int n,c,a[1000],final=0;
void ktao(){
     cin>>n;
     c=1;
     a[1]=n;
}
void sinh(){
     int i=c;
     while(i>=1&&a[i]==1){
          i--;
     }
     if(i==0) final=1;
     else{
          a[i]--;
          int d=c-i+1;
          c=i;
          int q=d/a[i];
          int r=d%a[i];
          for(int j=1;j<=q;j++){
               c++;
               a[c]=a[i];
          }if(r!=0){
               c++;a[c]=r;
          }
     }
}
int main(){
     ktao();
     while(final==0){
          for(int i=1;i<=c;i++){
               cout<<a[i]<<" ";
          }
          cout<<endl;
          sinh();
     }
}
