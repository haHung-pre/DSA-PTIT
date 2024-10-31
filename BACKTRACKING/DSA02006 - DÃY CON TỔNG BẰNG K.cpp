#include<bits/stdc++.h>
using namespace std;
int a[500],n,s,x[500];
bool check;
void ql(int i,int bd,int sum){
	for(int j=bd;j<=n;j++){
	x[i]=a[j];		
	if(sum+a[j]==s){
		check=true;
		cout<<"[";
		for(int u=1;u<=i;u++){
			cout<<x[u];
			if(u<i)cout<<" ";
			if(u==i)cout<<"]";
		}
		cout<<" ";
	}
	else if(sum+a[j]<s)
	ql(i+1,j+1,sum+a[j]);
}
}
int main(){
	int t;cin>>t;
	while(t--){
		check=false;
		cin>>n>>s;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		ql(1,1,0);
		if(check==false)cout<<"-1"; 
		cout<<endl;
	}
}
