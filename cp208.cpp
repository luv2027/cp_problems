#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> dp(10100, -1);
vector<int> v;

int solve(int level){
    if(level == 0){
        return 0;
    }

    if(dp[level] != -1){
        return dp[level];
    }

    int ans = 0;
    for(int prev_taken = 0; prev_taken < level; prev_taken++){
        if(v[prev_taken] < v[level]){
            ans = max(ans, 1+solve(prev_taken));
        }
    }
    return dp[level] = ans;
}

int main(){
    cin >> n;
    v.resize(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int best = 0;
    for(int i=0; i<n; i++){
        best = max(best, solve(i));
    }
    cout << best << endl;
return 0;
}
