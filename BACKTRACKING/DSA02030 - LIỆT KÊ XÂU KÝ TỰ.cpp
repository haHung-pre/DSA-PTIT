#include<bits/stdc++.h>
using namespace std;
char c;
int k;
void ql(string s,char x) {
    if(s.size()==k){
        cout<<s<<endl;
        return;
    }
    for(char j=x;j<=c;j++){
        ql(s+string(1,j),j);
    }
}
int main(){
    cin>>c>>k;
    ql("",'A');
}

