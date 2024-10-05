#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    int n;
    string s;
    while(cin>>s){
        if(s=="pop"&&!st.empty()){
            st.pop();
        }else if(s=="push"){
            cin>>n;
            st.push(n);
        }else{
            if(st.empty()){
                cout<<"empty"<<endl;
            }else{
                stack<int>tmp;
                while(!st.empty()){
                    tmp.push(st.top());
                    st.pop();
                }
                while(!tmp.empty()) {
                    cout<<tmp.top()<<' ';
                    st.push(tmp.top());
                    tmp.pop();
                }
                cout<<endl;
            }
        }
    }
}

