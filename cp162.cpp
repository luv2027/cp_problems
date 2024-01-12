#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll num_req = i+1;
        if(num_req > v[i]){
            ans += num_req - v[i];
        }
        else if(num_req < v[i]){
            ans += v[i] - num_req;
        }
    }

    cout << ans << endl;

return 0;
}
