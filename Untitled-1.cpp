#include<iostream>
#include<vector>
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
    ktao();vector<vector<int>>v;
    int c=0;
    while(final==0){
        vector<int>tmp;
            for(int i=1;i<=k;i++){
                tmp.push_back(a[i]);
            }
            v.push_back(tmp);
            sinh();
    }
    for(int i=v.size()-1;i>=0;i--){
        c++;
        bool check=true;
        for(int j=0;j<k;j++){
            if(v[i][j]!=x[j+1]){
                check=false;
                break;
            }
        }
        if(check){
            cout<<c<<endl;
            return 0;
        }
    }
}
        
