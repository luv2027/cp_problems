#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector<pair<ll, ll>> v(n);

    int a, b;
    for(int i=0;i<n; i++){
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(), v.end());

    ll maxi = INT_MIN;
    for(int i=0; i<n-1; i++){
        ll ans = 1;
        for(int j=i+1; j<n; j++){
            if(v[i].second > v[j].first){
                ans ++;
            }
            maxi = max(maxi, ans);
        }
    }

    cout << maxi << endl;

return 0;
}
