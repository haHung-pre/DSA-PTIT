#include<bits/stdc++.h>
using namespace std;
int x[100001],y[100001],n,m;
int count(int start,int end) {
    int *it1=lower_bound(y,y+m,start);
    int *it2 =upper_bound(y,y+m,end);
    return it2-it1;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++)cin>>x[i];
        for(int i=0;i<m;i++)cin>>y[i];
        sort(y,y+m);
        int ans=0;
        for(int i=0;i<n;i++){
            if(x[i]==0)continue;
            else if(x[i]==1)
                ans+=count(0,0);
            else if(x[i]==2)
                ans+=m-count(2,4);
            else if(x[i]==3)
                ans+=m-count(3,3);
            else
                ans+=m-count(2,x[i]);
        }
        cout<<ans<<endl;
    }
}
