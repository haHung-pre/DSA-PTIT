#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int n,k;
    int a[100005];
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long cnt=0;
        for(int i=0;i<n;i++){
            cnt+=lower_bound(a+i+1,a+n,k+a[i])-a-i-1;
        }
        cout<<cnt<<endl;
    }
}

