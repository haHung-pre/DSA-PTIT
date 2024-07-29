#include<iostream>
using namespace std;
int n,k,s,c,x[100];
void Try(int i,int pos,int sum){
    for(int j=pos;j<=n;j++){
        if(sum+j<=s){
            x[i]=j;
            sum+=j;
            if(sum==s&&i==k)
                c++;
            else if(sum<s&&i<k)
                Try(i+1,j+1,sum);
            sum-=j;
        }
    }
}
int main(){
    while(1){
        cin>>n>>k>>s;
        if(n==0&&k==0&&s==0)break;
        c=0;
        Try(1,1,0);
        cout<<c<<endl;
    }
}