#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll n, m,k;
ll a[50005];
ll dp[5005][5005];

ll solve(ll level, ll cnt){
    if(level > n-m || cnt >= k){
        return 0;
    }

    if(dp[level][cnt] != -1){
        return dp[level][cnt];
    }

    ll ans = 0;
    for(ll i=level; i<level+m; i++){
        ans += a[i];
    }

    ans = ans + solve(level+m, cnt+1);
    ll ans1 = solve(level+1, cnt);

    return dp[level][cnt] = max(ans, ans1);
}

int main(){
    cin >> n >> m >> k;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0) << endl;

return 0;
}
