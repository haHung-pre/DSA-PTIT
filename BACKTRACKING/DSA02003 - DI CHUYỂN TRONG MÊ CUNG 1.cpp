#include<bits/stdc++.h>
using namespace std;
int a[11][11],n;
bool ok;
void ql(int i,int j,string x){
	if(!a[i][j])return;
	if(i==n&&j==n){
		cout<<x<<" ";
		ok=1;
		return;
	}
	if(i!=n)ql(i+1,j,x+'D');
	if(j!=n)ql(i,j+1,x+'R');
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		ok=0;
		ql(1,1,"");
		if(ok==0)cout<<"-1\n";
		cout<<endl;
	}
}
