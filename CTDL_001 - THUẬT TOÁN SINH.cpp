C1:#include<iostream>
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




C2:#include<bits/stdc++.h>
using namespace std;
int n,x[100],ok=0;
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
	if(i==n){
		ok=1;
		for(int k=1;k<=n;k++){
			if(x[n-k+1]!=x[k]){
				ok=0;
				break;
			}
		}
		if(ok){
		for(int i=1;i<=n;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
	}
	} 
	else ql(i+1);
}
}
int main(){
	cin>>n;
	ql(1);
}
