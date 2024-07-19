#include<iostream>
using namespace std;
int n,a[100],final=0;
void ktao(){
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		final=1;
	}else{
		a[i]=1;
	}
}
int main(){
	ktao();
	while(final==0){
		for(int i=1;i<=n;i++){
			if(a[i]==0)cout<<"B";
			else cout<<"A";
		}
		cout<<endl;
		sinh();
	}
}
