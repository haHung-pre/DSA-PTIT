#include<iostream>
#include<algorithm>
using namespace std;
int n,a[1005],final=0;
void ktao(){
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=n-1;
    while(n>=1&&a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        final=1;//
    }else{
        int j=n;
        while(a[i]>a[j])j--;
        swap(a[i],a[j]);
        sort(a+i+1,a+n+1);
    }
}
int main(){
    ktao();
    while(final==0){
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sinh();
    }
}