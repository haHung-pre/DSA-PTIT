C1:#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
  	while(t--){
		int t;cin>>t;
		string s;cin>>s;
		int x[s.length()],n=s.length();
		for(int i=0;i<n;i++)x[i]=s[i] -'0';
		n--;
		int i=n-1;
		while(i>=0&&x[i]>=x[i+1])i--;
		cout<<t<<' ';
		if(i<0)cout<<"BIGGEST\n";
		else{
			int k=n;
			while(x[i]>=x[k]&&k>0)k--;
			swap(x[i],x[k]);
			int l=i+1,r=n;
			while(l<r)
				swap(x[l++],x[r--]);
			for(int i=0;i<=n;i++)
				cout<<x[i];
			cout<<endl;
		}
   }
}
C2:#include<bits/stdc++.h>
using namespace std;
void sinh(string s){
   int i=s.size()-2;
   while(i>=0&&s[i]>=s[i+1]){
      i--;
   }
   if(i==-1){
      cout<<"BIGGEST\n";
   }else{
      int j=s.size()-1;
     while(s[i]>=s[j])j--;
      swap(s[i],s[j]);
      reverse(s.begin()+i+1,s.end());
      cout<<s<<endl;
   }
}
int main(){
   int t;cin>>t;
   while(t--){
      int tt;string s;cin>>tt>>s;
      cout<<tt<<" ";
      sinh(s);
   }
}
C3:#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while(t--){
      int tt;string s;cin>>tt>>s;
      cout<<tt<<" ";
      if(next_permutation(s.begin(),s.end()))
      cout<<s<<endl;
      else cout<<"BIGGEST\n";
   }
}
