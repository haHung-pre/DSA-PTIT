#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=s.length();
        string temp(n,'0');
        temp[0]=s[0];
        for(int i=1;i<n;i++){
            if(s[i]=='1'){
                if(temp[i-1]=='1')temp[i]='0';
                else temp[i]='1';
            }else{
                temp[i]=temp[i - 1];
            }
        }
        cout<<temp<<endl;
    }
}
