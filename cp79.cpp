#include<bits/stdc++.h>
using namespace std;
int t;
int b[1010100];
int n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n*(n-1)/2;i++)
		cin>>b[i];
		sort(b+1,b+n*(n-1)/2+1);
		int now=1;
		for(int k=n-1;k>=1;k--){
			cout<<b[now]<<" ";
			now+=k;
		}
		cout<<b[n*(n-1)/2]<<endl;
	}
}
