#include<bits/stdc++.h>
using namespace std;
int n,k,a[20],final=0;
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>0&&a[i]==n-k+i){
		i--;
	}
	if(i==0)final=1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	} 
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		ktao();
		final=0;
		while(final==0){
			for(int i=1;i<=k;i++){
				cout<<a[i];
			}
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
}
