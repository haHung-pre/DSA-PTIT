#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          a[i]=n-i;
     }
do{
     for(auto x:a){
          cout<<x;
     }
     cout<<endl;
}while(prev_permutation(a,a+n));
}