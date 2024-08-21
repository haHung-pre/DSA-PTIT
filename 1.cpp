C1:#include<bits/stdc++.h>
using namespace std;
void ql(vector<int>&tmp,int k,int bd,vector<int>&v,vector<vector<int>>&res) {
    if(v.size()==k) {
        res.push_back(v);
        return;
    }
    for(int j=bd;j<tmp.size();j++){
        v.push_back(tmp[j]);
        ql(tmp,k,j+1,v,res);
        v.pop_back();
    }
}
int main() {
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
	sort(a.begin(),a.end());	
    a.erase(unique(a.begin(),a.end()),a.end());
    vector<vector<int>>res;
    vector<int>v;
    ql(a,k,0,v,res);
    for(auto& it:res) {
        for(int num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

C2:
