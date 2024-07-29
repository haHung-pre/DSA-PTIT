#include<iostream>
#include<vector>
using namespace std;
vector<int>x;
void in(){
    string s;cin>>s;
    for(char o:s)x.push_back(o-'0');
}
void prev(){
    int n=x.size();
    int pos=-1;
    for(int i=0;i<n;i++)if(x[i]==1)pos=i;
    if(pos==-1){
        for(int i=0;i<n;i++)x[i]=1;
    }else{
        x[pos]=0;
        for(int i=pos+1;i<n;i++)x[i]=1;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        x.clear();
        in();
        prev();
        for(int i=0;i<x.size();i++)cout<<x[i];
        cout<<endl;
    }
}