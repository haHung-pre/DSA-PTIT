#include<bits/stdc++.h>
using namespace std;
char c;
int k;
void ql(string s,char x) {
    if(s.size()==k){
        cout<<s<<endl;
        return;
    }
    for(char j=x;j<=c;j++){
        ql(s+string(1,j),j);
    }
}
int main(){
    cin>>c>>k;
    ql("",'A');
}

#include<bits/stdc++.h>
using namespace std;
int x[27],n,k;
void in(){
	for(int i=1;i<=k;i++){
		cout<<char('A'+x[i]-1);
	}
	cout<<endl;
}
void ql(int i,int bd){
	for(int j=bd;j<=n;j++){
		x[i]=j;
		if(i==k)in();
		else ql(i+1,j);
	}
}
int main(){
	char c;cin>>c>>k;
	n=c-'A'+1;
    ql(1,1);
}

