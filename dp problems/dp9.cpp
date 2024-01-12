#include<bits/stdc++.h>
using namespace std;

double dp[3001][3001];
double v[3001];
int n;

double solve(int level, int n_heads){
    if(level == n){
        if(n_heads > n- n_heads){
            return 1;
        }
        return 0;
    }

    if(dp[level][n_heads] != -1.0){
        return dp[level][n_heads];
    }

   return dp[level][n_heads] = v[level]*solve(level+1, n_heads+1) + (1-v[level])*solve(level+1, n_heads);
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j] = -1.0;
        }
    }

    cout << fixed << setprecision(10) << solve(0, 0)<< endl;
return 0;
}
