#include<iostream>
using namespace std;
int x[100],n,k,ok;
void next(){
	int i=k;
	while(i>0 &&x[i]==n-k+i)i--;
	if(!i)ok=0;
	else{
		x[i]++;
		for(int j=i+1;j<=k;j++)
			x[j]=x[j-1]+1;
	}
}
bool check(int a[]){
	for(int i=1;i<=k;i++)
		if(x[i]!=a[i])
			return false;
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int a[100];
		cin>>n>>k;
		for(int i=1;i<=k;i++)x[i]=i;
        for(int i=1;i<=k;i++)cin>>a[i];
        ok=1;
		int c=1;
		while(ok){
			if(check(a))break;
			c++;
			next();
		}
		cout<<c<<endl;
	}
}
