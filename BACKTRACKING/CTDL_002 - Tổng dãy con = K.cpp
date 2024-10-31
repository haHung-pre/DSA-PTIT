C1:#include<bits/stdc++.h>
using namespace std;
int n,s=0,x[100],a[100];
vector<vector<int>>v;
vector<int>tmp;
void ql(int i,int bd,int sum){
	for(int j=bd;j<=n;j++){
	if(sum+a[j]<=s){
		x[i]=a[j];
	if(sum+a[j]==s){
		tmp.clear();
		for(int u=1;u<=i;u++){
			tmp.push_back(x[u]);
		}
		v.push_back(tmp);
		cout<<endl;
	}else ql(i+1,j+1,sum+a[j]);
	}
}
}
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	ql(1,1,0);
	for(int i=v.size()-1;i>=0;i--){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j];
			if(j<v[i].size()-1)cout<<" ";
		}
		cout<<endl;
	}
	cout<<v.size()<<endl;
}






C2:#include<iostream>
using namespace std;
int n,k,a[1005],final=0,c=0,x[1005];
void ktao(){
   for(int i=1;i<=n;i++){
      cin>>a[i];
      x[i]=0;
   }
}
void sinh(){
   int i=n;
   while(i>=1&&x[i]==1){
      x[i]=0;
      i--;
   }
   if(i==0) final=1;
   else x[i]=1;
}
bool check(){
   int sum=0;
   for(int i=1;i<=n;i++){
      if(x[i]==1){
         sum+=a[i];
      }
   }
   return sum==k;
}
void out(){
   for(int i=1;i<=n;i++){
      if(x[i]==1){
         cout<<a[i]<<" ";
      }
   }
   cout<<endl;
}
int main(){
   cin>>n>>k;
   ktao();
   while(final==0){
      if(check()){
         out();
         c++;
      }
      sinh();
   }
   cout<<c;
}
