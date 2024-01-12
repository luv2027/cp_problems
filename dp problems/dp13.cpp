#include <bits/stdc++.h>
using namespace std;
bool dp[1001][1002];

bool solve(int level, int k, int n, vector<int>&a){
    if(level == n){
        return false;
    }

    if(k == 0){
        return true;
    }

    if(dp[level][k] != 0){
        return dp[level][k];
    }

    bool ans = false;

    if(a[level] <= k){
        if(solve(level +1, k-a[level], n, a) == true){
            ans = true;
        }
    }
    else{
        ans = solve(level+1, k, n, a);
    }

    return dp[level][k] = ans;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n, k;

        vector<int> a;
        for(int i=0; i<n; i++){
                cin>> a[i];
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                dp[i][j] = false;
            }
        }

        cout << solve(0, k, n, a);
    }
    return 0;
}
