#include<iostream>
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