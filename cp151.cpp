#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int r,g,b;cin>>r>>g>>b;
		int m=max({r,g,b});
		if(m>(r+g+b-m+1))
			cout<<"No"<<'\n';
		else
			cout<<"Yes"<<'\n';
	}
}
