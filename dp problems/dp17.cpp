#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// this is the recursive code to find the unique order for combinational sum
// this is done with the help of form 1 as we did not wanted the order which mattered

const int mod = 1e9+7;

ll n;
ll x;
ll a[100010];
ll dp[101][1000010];


ll solve(ll level, ll sum){
    if(sum  == 0){
        return 1;
    }

    if(level == n){
        if(sum == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

    if(sum < 0){
        return 0;
    }

    if(dp[level][sum] != -1){
        return dp[level][sum];
    }

    ll pick = solve(level, sum - a[level])%mod;
    ll not_pick = solve(level+1, sum)%mod;

    return dp[level][sum] = (pick+ not_pick)%mod;
}


int main(){
    cin>> n >> x;

    for(ll i=0; i<n; i++){
        cin>> a[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << solve(0, x);
return 0;
}
