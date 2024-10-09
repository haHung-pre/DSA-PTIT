C1:#include<iostream>
#include<vector>
using namespace std;
#define pb push_back
int n,k,x[100],ok;
vector<char>v;
void init(){
    v.clear();
    ok=1;
    cin>>n>>k;
    v.pb('@');
    for(int i=1;i<=n;i++){
        v.pb(i+64);
        x[i]=i;
    }
}
void next(){
    int i=k;
    while(i>0&&x[i]==n-k+i)i--;
    if(!i)ok=0;
    else{
        x[i]++;
        for(int j=i+1;j<=k;j++)
            x[j]=x[j-1]+1;
    }
}
void out(){
    for(int i=1;i<=k;i++)
        cout<<v[x[i]];
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        init();
        while(ok){
            out();
            next();
        }
    }
}




C2:#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<char>letters;
void ql(vector<char>&s,int bd){
   if(s.size()==k){
      for(char c:s)
         cout<<c;
      cout<<endl;
      return;
   }
   for(int i=bd;i<n;i++){
      s.push_back(letters[i]);
      ql(s,i+1);
      s.pop_back();
   }
}
int main(){
   int t;cin>>t;
   while(t--){
      cin>>n>>k;
      letters.clear();
      for (int i=0;i<n;i++){
         letters.push_back('A'+i);
      }
      vector<char>s;
      ql(s,0);
   }
}
