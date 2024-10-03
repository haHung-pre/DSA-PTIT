#include<iostream>
#include<vector>
using namespace std;
int n,x[200];
vector<string>v;
void Try(int i,int pos,int sum){
    for(int j=pos;j>=1;j--){
        sum+=j;
        x[i]=j;
        if(sum==n){
            string s ="(";
            for(int k=1;k<=i;k++)
            s+=to_string(x[k])+" ";
            s.pop_back();s+=")";
            v.push_back(s);
        }else if(sum<n)
            Try(i+1,j,sum);
        sum-=j;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        v.clear();
        Try(1,n,0);
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
