#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9+7;
ll dp[1000][1000];
char mat[1000][1000];
ll h, w;

ll solve(ll i, ll j){
    if(i == h-1 && j == w-1){
        return 1;
    }

    if(i >= h || j >= w){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    if(mat[i][j] == '#'){
        return 0;
    }
    ll ans = (solve(i+1, j)%mod + solve(i, j+1)%mod)%mod;

    return dp[i][j] = ans;
}

int main(){
    cin >> h >> w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> mat[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));

    cout << solve(0, 0) << endl;
return 0;
}
