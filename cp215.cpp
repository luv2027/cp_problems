#include<bits/stdc++.h>
using namespace std;
// this is to find a no. of substring which does not have 0100 in it
// this is being implemented with the help fsa

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

    int ans = 0;
    if(match == 0){
        ans = solve(level+1, 0) + solve(level+1, 1);
    }
    if(match == 1){
        ans = solve(level+1, 1) + solve(level+1, 2);
    }
    if(match == 2){
        ans = solve(level+1, 0) + solve(level+1, 3);
    }
    if(match == 3){
        ans = solve(level+1, 2) + solve(level+1, 4);
    }
    return dp[level][match] = ans;
}


int main(){
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0) << endl;
return 0;
}
