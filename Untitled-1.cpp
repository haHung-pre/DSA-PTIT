#include<iostream>
#include<algorithm>
using namespace std;
int n,a[1005];
void sinh(){
    int i=n;
    while(i>=1&&a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        for(int j=1;j<=n;j++){
            a[j]=j;
        }
    }else{
        int j=n;
        if(a[i]>a[j])j--;
        swap(a[i],a[j]);
        sort(a+i+1,a+n+1);
    }
}
int main(){
    int t;cin>>t;
        while(t--){
            cin>>n;
            for(int i=1;i<=n;i++){
                cin>>a[i];
            }
            sinh();
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }