C1:#include<bits/stdc++.h>
using namespace std;
void ql(vector<int>&tmp,int k,int bd,vector<int>&v,vector<vector<int>>&res) {
    if(v.size()==k) {
        res.push_back(v);
        return;
    }
    for(int j=bd;j<tmp.size();j++){
        v.push_back(tmp[j]);
        ql(tmp,k,j+1,v,res);
        v.pop_back();
    }
}
int main() {
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
	sort(a.begin(),a.end());	
    a.erase(unique(a.begin(),a.end()),a.end());
    vector<vector<int>>res;
    vector<int>v;
    ql(a,k,0,v,res);
    for(auto& it:res) {
        for(int num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

C2:#include<iostream>
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

