#include<bits/stdc++.h>
using namespace std;

int n;
int mat[1001][1001];
int dp[1000][1000];

int solve(int i, int j){
    if(i < 0 || i>=n || j<0 || j>=n){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int right = mat[i][j] + solve(i, j-1);
    int left = mat[i][j] + solve(i-1, j);

    return dp[i][j] = max(right, left);
}


int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j] = -1;
        }
    }

    cout << solve(n-1, n-1)<< endl;
return 0;
}

