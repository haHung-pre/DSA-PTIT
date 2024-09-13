#include<iostream>
#include<vector>
using namespace std;
int w,c[100],a[100],x[100],final=0,n;
void sinh(){
	int i=n;
	while(i>0&&a[i]==1){
		a[i] = 0;
		i--;
	}
	if(i==0)final=1;
	else a[i]=1;
}
int main(){
	cin>>n>>w;
	for(int i=1;i<=n;i++)cin>>c[i];
	for(int i=1;i<=n;i++)cin>>x[i];
	for(int i=1;i<=n;i++)a[i]=0;
	final=0;
	int max=-1;
	vector<int>v;
	while(final==0){
		int sum=0,temp=0;
		for(int i=1;i<=n;i++){
			sum += c[i]*a[i];
			temp += x[i]*a[i];
		}
		if(sum>max&&temp<=w){
			v.clear();
			max=sum;
			for(int i=1;i<=n;i++)v.push_back(a[i]);
		}
		sinh();
	}
	cout<<max<<endl;
	for(int x:v)cout<<x<<" ";
}
