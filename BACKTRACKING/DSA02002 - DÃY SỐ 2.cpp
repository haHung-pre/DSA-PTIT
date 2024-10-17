#include<bits/stdc++.h>
using namespace std;
int n,a[15];
vector<vector<int>>v;
vector<int>tmp;
void ql(int i){
	if(n-i+1<1)return;
	tmp.clear();
	for(int j=1;j<=n-i+1;j++){
		tmp.push_back(a[j]);
	}
	for(int j=1;j<n-i+1;j++){
		a[j]=a[j]+a[j+1];
	}
	v.push_back(tmp);
	ql(i+1);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		v.clear();
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		ql(1);
		for(int i=v.size()-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<v[i].size();j++){
				cout<<v[i][j]; 
				if(j<v[i].size()-1)cout<<" ";
			}
			cout<<"]"<<" ";
		}
		cout<<endl;
	}
}
}
