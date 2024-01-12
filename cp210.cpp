#include<bits/stdc++.h>
using namespace std;

int n, m, o;
string a, b, c;
int dp[100][100][100];

int solve(int i, int j, int k){
    if(i > n || j> m || k>o){
        return 0;
    }

    if(dp[i][j][k] != -1){
        return dp[i][j][k];
    }

    int ans = 0;
    if(a[i] == b[j] && b[j] == c[k]){
        ans = 1+ solve(i+1, j+1, k+1);
    }
    else if(a[i] != b[j] || b[j] != c[k] || a[i] != c[k]){
        ans = max(solve(i+1, j, k), max(solve(i, j+1, k), solve(i, j, k+1)));
    }
    return dp[i][j][k] = ans;
}

int main(){
    cin >> n >> m>> o;
    cin >> a >> b>> c;

    int maxi = max(n, max(m, o));
    for(int i=0; i<maxi; i++){
        for(int j=0; j<maxi; j++){
                for(int k=0; k<maxi; k++){
                   dp[i][j][k] = -1;
                }
        }
    }

    cout << solve(0, 0, 0) << endl;
return 0;
}
