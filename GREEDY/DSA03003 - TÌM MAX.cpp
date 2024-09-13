#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a(n);
		for(auto &x:a)cin>>x;
		sort(a.begin(),a.end());
		long long sum=0;
		for(int i=0;i<n;i++){
			sum+=a[i]*i;
			sum%=mod;
		}
		cout<<sum<<endl;
	}
}
