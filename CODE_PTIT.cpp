#include<iostream>
using namespace std;
int n,k,a[100],x[100],c,final=0;
void sinh(){
	int i=k;
	while(i>0&&a[i]==n-k+i)i--;
	if(i==0)final=1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++)
			a[j]=a[j-1]+1;
	}
}
bool check(){
	for(int i=1;i<=k-1;i++)
		if(x[a[i]]>x[a[i + 1]])
			return false;
	return true;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		a[i]=i;
	}
	final=0,c=0;
	while(final==0){
		if(check())
			c++;
		sinh();
	}
	cout<<c;
}
