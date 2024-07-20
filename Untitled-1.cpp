#include<iostream>
using namespace std;
int n,k,a[1005],final=0,x[1005];
void ktao(){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>x[i];
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(i>=1&&a[i]==n-k+i){
        i--;
    }
    if(i==0) final=1;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main(){
    ktao();int c=0;
    while(final==0){
        c++;
        bool check=true;
            for(int i=1;i<=k;i++){
                if(a[i]!=x[i]) check=false;
            }
            if(check){
                cout<<c; 
            }
        sinh();
    }
}