#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,i,j,x,y;
    cin>>n;
    vector<long long>v(n+1,0);
    cout<<"1 ";
    unordered_map<int,int>mp1;
    mp1[1]=1;
    for(i=2;i<=n;i++) {
        if(mp1[i])continue;
        j=i;
        while(j<=n){
            if(!mp1[j]){
                cout<<j<<" ";
                mp1[j]=1;
                j*=2;
            }
        }
    }
    cout<<endl;
}

int main(){
    ll t1;
    cin>>t1;

    while(t1--){

       solve();

    }
    return 0;
}
