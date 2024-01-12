#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[3001][3001];
ll n;
ll a[3000];

ll solve(int i, int j){
    if(i > j){
        return -200;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    ll ans = 0;
    ans = max(a[i] - solve(i+1, j), a[j] - solve(i, j-1));
    return dp[i][j] = ans;
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << solve(0, n-1);
return 0;
}
