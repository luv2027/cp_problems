#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int target;

int solve(int n, int target, vector<int> &dp){

    if(target == 0){
        return 1;
    }

    if(dp[target] != -1){
        return dp[target];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(v[i] <= target){
            ans += solve(n, target - v[i], dp);
        }
    }
    return dp[target] = ans;
}

int main(){
    int n, target;
    cin >> n >> target;

    v.resize(n);

    vector<int> dp(target+1, -1);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    cout << solve(n, target, dp);
return 0;
}
