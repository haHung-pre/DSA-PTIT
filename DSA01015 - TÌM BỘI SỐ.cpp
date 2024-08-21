C1:#include<iostream>
#include<queue>
using ll=long long;
using namespace std;
string solve(int n){
    queue<string>q;
    q.push("0");q.push("9");
    while(1){
        string top=q.front();q.pop();
        ll x=stoll(top);
        if(x%n==0&&x)return top;
        q.push(top+"0");
        q.push(top+"9");
    }
    return"1";
}
int main(){
    int t;cin>>t;
    while(t){
        int n;cin>>n;
        cout<<solve(n)<<endl;
    }
}
C2:#include <bits/stdc++.h>
using namespace std;
void check()
{
   int n;
   cin >> n;
   queue<string> q;
   q.push("9");
   while (true)
   {
      string s = q.front();
      q.pop();
      int x = 0;
      for (char i : s)
      {
         x = x * 10 + (i - '0');
         x %= n;
      }
      if (x == 0)
      {
         cout << s << endl;
         return;
      }
      q.push(s + '0');
      q.push(s + '9');
   }
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      check();
   }
}
C3:#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      queue<long long>q;
      q.push(9);
      while(q.size()){
         long long k=q.front();
         q.pop();
         if(k%n==0){
            cout<<k<<endl;
            break;
         }
         q.push(k*10);
         q.push(k*10+9);
      }
   }
}
