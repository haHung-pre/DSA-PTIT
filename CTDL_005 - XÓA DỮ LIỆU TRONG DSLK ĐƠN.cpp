#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b;cin>>n;
	int a[n];
	for(auto &x:a){
		cin>>x;
	}
	cin>>b;
	for(auto &x:a){
		if(x!=b)cout<<x<<" ";		
	} 
}
