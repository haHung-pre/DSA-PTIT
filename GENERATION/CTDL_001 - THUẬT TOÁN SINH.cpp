C1:#include<bits/stdc++.h>
using namespace std;
int n,a[20],final=0,ok=0;
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
	if(i==0)final=1;
	else{
		a[i]=1;
	}
}
int check(){
	int l=0,r=n+1;
	while(l<r){
		if(a[l]!=a[r])return 0;
		l++;r--;
	}
	return 1;
}
int main(){
	cin>>n;
	ktao();
	while(final==0){
		if(check()){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	sinh();
	}
} 






C2:#include<bits/stdc++.h>
using namespace std;
int n,x[100],ok=0;
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
	if(i==n){
		ok=1;
		for(int k=1;k<=n;k++){
			if(x[n-k+1]!=x[k]){
				ok=0;
				break;
			}
		}
		if(ok){
		for(int i=1;i<=n;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
	}
	} 
	else ql(i+1);
}
}
int main(){
	cin>>n;
	ql(1);
}


C3:#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<pow(2,n);i++){
        auto s=bitset<20>(i).to_string();
        string tmp=s.substr(20-n,n);
        reverse(tmp.begin(),tmp.end());
        if(s.substr(20-n,n)==tmp){
            for(int j=0;j<n;j++){
                cout<<tmp[j]<<" ";
            }
            cout<<endl;
        }
    }
}

