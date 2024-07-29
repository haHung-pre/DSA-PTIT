#include<iostream>
#include<queue>
using ll=long long;
using namespace std;
string solve(int n){
    queue<string>q;
    q.push("0");q.push("9");
    while(1){
        string top=q.front();q.pop();
        ll x=stoll(top);
        if(x%n==0&&x)return top;
        q.push(top+"0");
        q.push(top+"9");
    }
    return"1";
}
int main(){
    int t;cin>>t;
    while(t){
        int n;cin>>n;
        cout<<solve(n)<<endl;
    }
}