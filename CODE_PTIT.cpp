#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
        int x[100];
        for(int i=0;i<n;i++)cin>>x[i];
        int c=1;
		while(prev_permutation(x,x+n)){
			c++;
		}
        cout<<c<<endl;
	} 
}