#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//this is recursive approach of knapsack problem

ll n;
ll x;
ll p[1010];
ll pages[1010];
ll dp[1001][100010];

ll solve(int level, int x){
    if(x == 0 || level == n){
        return 0;
    }

    if(dp[level][x] != -1){
        return dp[level][x];
    }

    int ans = 0;
    int ans1 = 0;
    if(p[level] <= x){
        ans = pages[level]+ solve(level+1 ,x - p[level]);
    }
    else{
        ans1 = solve(level+1, x);
    }
    return dp[level][x] = max(ans, ans1);
}

int main(){
    cin >> n >> x;

    for(int i=0; i<n; i++){
        cin>> p[i];
    }

    for(int i=0; i<n; i++){
        cin >> pages[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << solve(0, x) << endl;
    return 0;
}
