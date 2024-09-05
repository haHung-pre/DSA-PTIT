#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(auto &x:a)cin>>x;
	set<int>se;
	for(auto &x:a)se.insert(x);
	int c=se.size();
	cout<<c<<endl;
}
