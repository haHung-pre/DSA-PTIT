#include<bits/stdc++.h>
using namespace std;
int a[101][101],n,m,c=0;
void ql(int i,int j){
	if(i==n&&j==m){
		c++;
		return;
	}
	if(i!=n)ql(i+1,j);
	if(j!=m)ql(i,j+1);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		c=0;
		ql(1,1);
		cout<<c<<endl;
	}
}
