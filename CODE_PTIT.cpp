#include<iostream>
#include<vector>
#include<set>
using namespace std;
int n,k,x[10001],ok;
vector<int>a;
void next(){
	int i=k;
	while(i>0&&x[i]==n-k+i)i--;
	if(!i)ok=0;
	else{
		x[i]++;
		for(int j=i+1;j<=k;j++)
			x[j]=x[j-1]+1;
	}
}
void out(){
	for(int i=1;i<=k;i++){
		cout<<a[x[i]]<<" ";
	}
	cout<<endl;
}
int main(){
	cin>>n>>k;	
	set<int>se;
	for(int i=1;i<=n;i++){
		int b;cin>>b;
		se.insert(b);
		x[i]=i;
	}
	n=se.size();
	a.push_back(-1);
	for(int i:se)a.push_back(i);
	ok=1;
	while(ok){
		out();
		next();
	}
}