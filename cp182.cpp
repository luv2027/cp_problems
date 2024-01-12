#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> v;
    ll num = n;

    while(num--){
        ll a , b;
        cin >> a >> b;
        v.push_back(make_pair(b, a));
    }

    int f=0;
    ll maxi = INT_MIN;
    for(int i=0; i<n; i++){
            if(v[i].first <= k){
                maxi = max(maxi, v[i].second);
            }
            else{
                maxi = max(maxi, (v[i].second - (v[i].first - k)));
            }
    }

    cout << maxi << endl;
return 0;
}
