#include<bits/stdc++.h>
using namespace std;
int n,a[10005],final=0;
void ktao(){
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
	if(i==0)final=1;
	else{
		a[i]=1;
	}
}
bool check(){
	int l=1,r=n;
		while(l<=r){
			if(a[l]!=a[r])return false;
			l++;r--;
		}
		return true;
}
int main(){
	cin>>n;
	ktao();
	while(final==0){
		if(check()){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		sinh();
	}
}
