#include<bits/stdc++.h>
using namespace std;
//find the number of n length binary string that does'nt contain 0100 as
//subsequence

int n;
int dp[10100][5];
string t = "0100";

int solve(int level, int match){
    if(match == 4){
        return 0;
    }

    if(level == n){
        return 1;
    }

    if(dp[level][match] != -1){
        return dp[level][match];
    }
    int ans = solve(level+1, match+1) + solve(level+1, match);
    return dp[level][match] = ans;
}


int main(){
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0) << endl;
return 0;
}
