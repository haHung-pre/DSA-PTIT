C1:#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n=s.size(),ans=1;
		vector<vector<bool>>a(n,vector<bool>(n));
		for(int i=0;i<n;i++)
			a[i][i]=1;
		for(int i=1;i<n;i++)
			for(int j=0;j<n-i;j++){
				int k=i+j;
				a[j][k]=((j+1>k-1||a[j+1][k-1])&&s[j]==s[k]);
				if(a[j][k])
					ans=i+1;
			}
		cout<<ans<<endl;
	}
}










C2:#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=s.size();
        int l,r,ans=0;
        for(int i=0;i<n;i++){
            l=i-1;
            r=i+1;
            while(l>=0&&r<n&&s[l]==s[r]){
                l--;
                r++;
            }
            ans=max(ans,r-l-1);
            l=i-1;
            r=i;
            while(l>=0&&r<n&&s[l]==s[r]){
                l--;
                r++;
            }
            ans=max(ans,r-l-1);
        } 
        cout<<ans<<endl;
    }
}
