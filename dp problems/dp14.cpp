#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9+7;
ll n;
ll dp[1000010];

// this is recursive code of it
ll solve(ll sum){
    if(sum == 0){
        return 1;
    }

    if(sum < 0){
        return 0;
    }

    if(dp[sum] != -1){
        return dp[sum]%mod;
    }

    ll ans = 0;
    for(int i=1; i<=6; i++){
        ans += solve(sum-i)%mod;
        ans%=mod;
    }

    return dp[sum] = ans;
}

int main(){
    cin >> n;

    dp[0] = 1;
    for(int i=1; i<=n; i++){
        dp[i] = 0;
        for(int j=1; j<=6; j++){
            if(i>=j){
                dp[i] = (dp[i]%mod + dp[i-j]%mod)%mod;
                dp[i]%= mod;
            }
        }
    }
    cout << dp[n];
    return 0;
}


