#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0;cin>>n;
	int a[n];
	for(auto &x:a)cin>>x;
	set<int>se;
	for(auto &x:se)se.insert(x);
	c=se.size();
	cout<<c<<endl;
}
