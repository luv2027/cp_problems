#include<bits/stdc++.h>
using namespace std;

int n;
int x[1001];
int dp[1001][1001];

int solve(int l, int r){
    if(l+1 == r){
        return 0;
    }

    if(dp[l][r] != 1e9){
        return dp[l][r];
    }

    int ans = 1e9;
    for(int p=l+1; p<=r-1; p++){
        ans = min(ans , abs(x[r] - x[l]) + solve(l, p)+ solve(p, r));
    }

    return dp[l][r] = ans;
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x[i];
    }

    cout<< solve(0, n) << endl;
return 0;
}
