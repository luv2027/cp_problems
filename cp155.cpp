
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,k;cin>>n>>k;
	string s;cin>>s;
	ll arr[26]={0};
	for(int i=0;i<n;i++){
		arr[s[i]-'A']++;
	}
	sort(arr,arr+26,greater<int>());

	ll ans=0;
	for(int i=0;k>0&&i<26;i++){
		if(k<arr[i]){
			ans+=k*k;
			break;
		}
		ans+=arr[i]*arr[i];
		k-=arr[i];
	}
	cout<<ans<<'\n';
}
