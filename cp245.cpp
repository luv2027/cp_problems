#include<bits/stdc++.h>
using namespace std;

int dp[101][101];
int n, m;
int a[101];
int b[101];

int solve(int level1, int level2){
    if(level1 == n || level2 == m){
        return 0;
    }

    if(dp[level1][level2] != -1){
        return dp[level1][level2];
    }

    int ans = 0;
    if(a[level1] == b[level2] || a[level1] + 1 == b[level2] || a[level1]-1== b[level2] || a[level1]== b[level2] + 1 || a[level1] == b[level2] -1){
        ans = 1+ solve(level1+1, level2+1);
    }
    else{
        ans = max(solve(level1+1, level2), solve(level1, level2+1));
    }

    return dp[level1][level2] = ans;
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cin >> m;
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+m);
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0) << endl;

    return 0;
}


