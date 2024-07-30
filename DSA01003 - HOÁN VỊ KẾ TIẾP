#include<bits/stdc++.h>
using namespace std;
int n,a[1005],final=0;
void sinh(){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
	}else{
		int j=n;
		if(a[i]>a[j])j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sinh();
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
