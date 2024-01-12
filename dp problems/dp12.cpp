#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

ll dp[3001][3001];
ll n;
ll a[3001];

ll solve(ll i, ll j){
    if(i > j){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    ll op1 = a[i] + min(solve(i+1, j-1), solve(i+2, j));
    ll op2 = a[j] + min(solve(i+1, j-1), solve(i, j-2));
    return dp[i][j] = max(op1, op2);
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    memset(dp, -1, sizeof(dp));
    ll x =solve(0, n-1);

    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }

    ll y = sum - x;

    cout << x - y << endl;
    return 0;
}
