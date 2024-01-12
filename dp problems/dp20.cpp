#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

int n;
char mat[1010][1010];
ll dp[1010][1010];

ll solve(int i, int j){
    if(i>= n || j >= n){
        return 0;
    }

    if(i == n-1 && j == n-1){
        return 1;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    if(mat[i][j] == '*'){
        return 0;
    }

    return dp[i][j] = ((solve(i+1, j))%mod + (solve(i, j+1))%mod)%mod;
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));



    cout << solve(0, 0) << endl;
}
