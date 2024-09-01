C1:#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;string s;
    cin>>n>>s;
    long long res=0,tmp=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            tmp++;
            res+=i-(tmp<=i);
        }else{
            res+=i-tmp;
            tmp=1;
        }
    }
    cout<<res<<endl;
}





C2:#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string s;
    cin>>n>>s;
    long long total=(1LL*n*(n - 1))/2;
    int c=1;
    vector<int>v;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i - 1])
            c++;
        else{
            v.push_back(c);
            c=1;
        }
    }
    v.push_back(c);
    for(int i=1;i<v.size();i++)
        total-=(v[i]+v[i-1]-1);
    cout<<total;
}
