#include<bits/stdc++.h>
using namespace std;
int n,x[30];
bool used[30];
void ql(int i){
 	for(int j=1;j<=n;j++){
		if(!used[j]&&abs(j-x[i-1])!= 1){		
   		x[i]=j;
   		used[j]=true;
   	if(i==n){
    for(int u=1;u<=n;u++){
     cout<<x[u];
    }
    cout<<endl;
   }
   else
    ql(i+1);
   used[j]=false;
  }
 }
}
int main(){
 	int t;cin>>t;
 	while(t--){
  		cin>>n;
  		x[0]=-1;
  		ql(1);
 }
}
