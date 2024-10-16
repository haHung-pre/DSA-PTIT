#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    while(t--){
         int n,x;
    cin>>n;
    string s;
    stack<int>st;
    while(n--){
        cin>>s;
        if(s=="PUSH"){
            cin>>x;
            st.push(x);
        }
        else if(s=="POP"){
            if(!st.empty()){
                st.pop();
            }
        }
        else if(s=="PRINT"){
            if(st.empty())
                cout<<"NONE";
            else
                cout<<st.top();
            cout<<endl;
        }
    }
}
        cout<<endl;
}
