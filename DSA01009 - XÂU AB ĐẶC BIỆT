C1:#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int n,k;
queue<string>q;
vector<string>v;
bool check(string s){
	int c=0,temp=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='B'){
			if(temp==k)c++;
			temp=0;
		}else{
			temp++;
		}
	}
	if(temp==k)c++;
	return c==1;
}
int main(){
	cin>>n>>k;
	q.push("A"),q.push("B");
	while(1){
		string top=q.front();q.pop();
		if(top.size()==n&&check(top))
			v.push_back(top);
		if(top.size()>n)break;
		q.push(top+"A");
		q.push(top+"B");
	}
	cout<<v.size()<<endl;
	for(string x:v)cout<<x<<endl;
}
C2:#include<bits/stdc++.h>
using namespace std;
int n,k,a[20],final=0;
void ktao(){
   for(int i=1;i<=n;i++){
      a[i]=0;
   }
}
void sinh(){
   int i=n;
   while(i>0&&a[i]==1){
      a[i]=0;
      i--;
   }
   if(i==0) final=1;
   else{
      a[i]=1;
   }
}
int check(){
   int temp=0,c=0;
   for(int i=1;i<=n;i++){
      if(a[i]==1)temp++;
      else temp=0;
      if(temp>k) return false;
      if(temp==k)c++;
   }
   return c==1;
}
int main(){
      cin>>n>>k;
      ktao();
      final=0;
      vector<string>v;
     while(final==0){
      if(check()){
         string res="";
         for(int i=1;i<=n;i++){
         if(a[i]==1)res+="A";
         else res+="B";
      }
      v.push_back(res);
      }
      sinh();
     }
     cout<<v.size()<<endl;
     for(string x:v)cout<<x<<endl;
}
