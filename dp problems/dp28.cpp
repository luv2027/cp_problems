#include<bits/stdc++.h>
using namespace std;

int dp[10001][1000];
int n, t;
int a[10001];

bool rec(int level, int a[], int sum_taken){
    if(level == n){
        return false;
    }

    if(sum_taken == t){
        return true;
    }

    if(dp[level][sum_taken] != -1){
        return dp[level][sum_taken];
    }

    int ans = rec(level+1, a, sum_taken) || rec(level+1, a, a[level]+ sum_taken);
    return dp[level][sum_taken] = ans;
}

int main(){
    cin >> n >> t;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    memset(dp, -1, sizeof(dp));

    cout << rec(0, a, 0) << endl;
return 0;
}
