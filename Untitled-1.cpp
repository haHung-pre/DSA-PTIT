#include<iostream>
#include<algorithm>
using namespace std;
int n,a[1005];
void ktao(){
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
int main(){
    ktao();
    do{
        for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(a+1,a+n+1));
}