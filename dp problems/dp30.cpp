#include<bits/stdc++.h>
using namespace std;

int n;
int x[1001];
int dp[1001][1001];

int rec(int l, int r){
    if(l+1 == r){
        return 0;
    }

    if(dp[l][r] != -1){
        return dp[l][r];
    }

    int ans = 1e9;
    for(int p=l+1; p<r; p++){
        ans = min(ans, x[r] - x[l]+ rec(l, p) + rec(p, r));
    }
    return dp[l][r] = ans;
}

int main(){
    cin >> n;

    x[0] = 0;

    for(int i=1; i<=n; i++){
        cin >> x[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << rec(0, n) << endl;
return 0;
}
