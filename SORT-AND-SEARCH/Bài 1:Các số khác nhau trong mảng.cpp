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



#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int c=0;
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1])c++;
	}
	cout<<c+1<<endl;
}
