#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int x,s=0,mod=1e9+7;
		priority_queue<int,vector<int>,greater<int>>q;
		for(int i=0;i<n;i++){
			cin>>x;
			q.push(x);
		}
		while(q.size()>1){
			int s1=q.top();
			q.pop();
			int s2=q.top();
			q.pop();
			int k=(s1+s2)%mod;
			s=(s+k)%mod;
			q.push(k);
		}
		cout<<s<<endl;
	}
}
