C1:#include<bits/stdc++.h>
using namespace std;
void ql(string &x,int i){
	if(i<0)return;
	if(x[i]=='0'){
		x[i]='1';
		return;
	}
	else{
		x[i]='0';
		ql(x,i-1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		string x;cin>>x;
		ql(x,x.size()-1);
		cout<<x<<endl;
	}
}







C2:#include<bits/stdc++.h>
using namespace std;
void check(string s){
	cin>>s;
	int i=s.size()-1;
	while(i>-1&&s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i!=-1) s[i]='1';
	cout<<s<<endl;
}
int main(){
	int t;cin>>t;
	string s;
	while(t--){
		check(s);
	}
}
