#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string>l1,l2;
        l1.pb("0");l1.pb("1");
        l2.pb("1");l2.pb("0");
        for(int i=1;i<=n-1;i++){
            for(string &x:l1)x ="0"+x;
            for(string &x:l2){
                x="1"+x;
                l1.pb(x);
            }
            l2.clear();
            for(int i=l1.size()-1;i>=0;i--)
	    l2.pb(l1[i]);
        }
        for(string x:l1)cout<<x<<" ";
        cout<<endl;
    }
}
