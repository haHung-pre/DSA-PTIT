#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n,k,sum=0;
    cin>>n>>k;
    int a[n];
    for(int &i:a){
        cin>>i;
        sum+=i;
    }
    sort(a,a+n);
    k=min(k,n-k);
    for(int i=0;i<k;i++){
        sum-=2*a[i];
    }
    	cout<<sum<<endl;
	}
}

