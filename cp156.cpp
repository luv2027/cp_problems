#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1073741824;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    ll m = a*b*c;
    vector<ll> v(m+1);

    for(int i=0; i<=m; i++){
        v[i] = 0;
    }

    for(ll i=1; i<=m; i++){
        for(ll j=i; j<=m; j+=i){
            v[j]++;
        }
    }

    ll ans = 0;
    for(ll  i=1; i<=a; i++){
        for(ll j=1; j<=b; j++){
            for(ll k=1; k<=c; k++){
                ans += v[i*j*k];
                ans%= mod;
            }
        }
    }

    cout << ans << endl;
return 0;
}
