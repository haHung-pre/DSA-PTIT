#include<iostream>
#include<vector>
using namespace std;
#define pb push_back
int n,k,a[100][100],visited[100],x[100];
vector<vector<int>>v;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            x[i]=j;
            visited[j]=1;
            if(i==n){
                int index=1,temp=0;
                for(int i=1;i<=n;i++){
                    temp+=a[i][x[index++]];
                }
                if(temp==k){
                    vector<int>res(x+1,x+i+1);
                    v.pb(res);
                }
            }else
                Try(i + 1);
            visited[j]= 0;
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    Try(1);
    cout<<v.size()<<endl;
    for(auto x:v){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}