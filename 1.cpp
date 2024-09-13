#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1000,500,200,100,50,20,10,5,2,1};
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int c=0;
		for(int i=0;i<10;i++){
			while(n>=a[i]){
				c++;
				n-=a[i];
			}
		}
		cout<<c<<endl;
	}
}
