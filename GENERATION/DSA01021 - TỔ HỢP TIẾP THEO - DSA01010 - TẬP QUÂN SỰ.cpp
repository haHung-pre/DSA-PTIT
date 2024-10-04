C1:#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int x[k+1],y[k+1];
        for(int i=1;i<=k;i++){
            cin>>x[i];
            y[i]=x[i];
        }
        int i=k;
        while(i>0&&x[i]==n-k+i)i--;
        if(!i){
            cout<<k<<endl;
        }else{
            x[i]++;
            for(int j=i+1;j<=k;j++)
                x[j]=x[j-1]+ 1;
            int c=0;
            for(int l=1;l<=k;l++){
                int temp=0;
                for(int j=1;j<=k;j++){
                    if(y[l]==x[j])
                        temp++;
                }
                if(!temp)c++;
            }
            if(!i)cout<<k;
            else cout<<c;
            cout<<endl;
        }
    }
}
C2:#include<bits/stdc++.h>
using namespace std;
set<int>s;
int n,k,final=0,a[50];
void sinh(){
   int i=k;
   while(i>0&&a[i]==n-k+i){
      i--;
   }
   if(i==0){
      cout<<k<<endl;
   }
   else{
      a[i]++;
      for(int j=i+1;j<=k;j++){
         a[j]=a[j-1]+1;
      }
      int c=0;
      for(int i=1;i<=k;i++){
         if(s.count(a[i])==1)c++;
      }
      cout<<k-c<<endl;
   }
}
int main(){
   int t;cin>>t;
   while(t--){
      cin>>n>>k;
      for(int i=1;i<=k;i++){
         cin>>a[i];
         s.insert(a[i]);
      }
      sinh();
      s.clear();
   }
}
