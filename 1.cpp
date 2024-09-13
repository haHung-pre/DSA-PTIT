#include<bits/stdc++.h>
using namespace std;
int check(string s,char from,char to){
    int num=0;
    for(char &c:s){
        if(c==from)c=to;
        num=num*10+c-'0';
    }
    return num;
}
int main(){
    string a,b;cin>>a>>b;
    cout<<check(a,'6','5')+check(b,'6','5')<<" ";
    cout<<check(a,'5','6')+check(b,'5','6');
}
