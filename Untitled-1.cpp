#include<iostream>
using namespace std;
int n,k,a[1005],ok=0;
void ktao(){
    cin>>n>> k;
    for(int i=1;i<=n;i++)
    a[i]=0;
    ok=0;
}

void sinh(){
    int i=n;
    while(i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=1;
    else a[i] = 1;
}

int check(){
    int sum=0;
    for(int i=1;i<=n;i++)sum+=a[i];
    return sum == k;
}
void out(){
    if(check()){
        for(int i=1;i<=n;i++)
        cout<<a[i];
        cout<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        ktao();
        while(ok==0){
            out();
            sinh();
        }
    }
}