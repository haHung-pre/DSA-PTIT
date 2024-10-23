#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++) 
            cin>>a[i];
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&a[st.top()]<=a[i])
                st.pop();
            if(st.empty()) 
                b[i]=-1;
            else 
                b[i]=st.top();
            st.push(i);
        }
        while(!st.empty())st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()>=a[i]) 
                st.pop();
            if(st.empty()) 
                c[i]=-1;
            else 
                c[i]=st.top();
            st.push(a[i]);
        }
        for(int i=0;i<n;i++){
            if(b[i]==-1) 
                cout<<-1<<" ";
            else 
                cout<<c[b[i]]<<" ";
        }
        cout<<endl;
    }
}
