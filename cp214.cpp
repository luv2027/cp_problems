#include<bits/stdc++.h>
using namespace std;

int n;
int dp[10100][16];
string t = "0100";

int solve(int level, int last3){
    if(level == n){
        return 1;
    }


    if(dp[level][last3] != -1){
        return dp[level][last3];
    }

    int ans = 0;
    if(level >=3 && last3 == 2){
        ans = solve(level+1, 5);
    }
    else{
        ans = solve(level+1, (last3<<1|0)&7);//we just want the last three digits and want to add 0 at the end
        ans = solve(level+1, (last3<<1|1)&7);
    }
    dp[level][last3] = ans;
}

int main(){
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0) << endl;
return 0;
}
