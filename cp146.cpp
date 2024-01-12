#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    vector<ll> b(m);
    map<ll, ll> mp1;

    for(int i=0; i<n; i++){
        cin >> a[i];
        mp1[a[i]]++;
    }

    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    ll ans = 0;
    for(int i=0; i<m; i++){
        ans += mp1[b[i]];
    }

    cout << ans << endl;

return 0;
}
