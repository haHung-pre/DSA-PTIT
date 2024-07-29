#include<iostream>
#include<algorithm>
using namespace std;
int n,x[10001],a[10001],ok;
void next(){
	int i=n-1;
	while(i>0&&x[i]>x[i+1])i--;
	if(!i)ok=0;
	else{
		int k=n;
		while(x[i]>x[k])k--;
		swap(x[i],x[k]);
		int l=i+1,r=n;
		while(l<=r){
			swap(x[l++],x[r--]);
		}
	}
}
void out(){
	for(int i=1;i<=n;i++){
		cout<<a[x[i]]<<' ';
	}
	cout<<endl;
}
int main(){
	cin>>n;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x[i]=i;
	}
	sort(a+1,a+n+1);
	ok=1;
	while(ok){
		out();
		next();
	}
}
