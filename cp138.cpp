#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll t,n,a[100001];
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        set<ll>s;
        sort(a,a+n);
        s.insert(a[0]);
        for(ll i=1; i<n; i++){
            if(a[i-1] >= a[i]){
                a[i] += 1;
            }
            //cout<<a[i]<<" ";
            s.insert(a[i]);
        }
        //cout<<endl;
        cout<<s.size()<<endl;
    }
    return 0;
}
