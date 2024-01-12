#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int dp[n+1];

    for(int i=0; i<=n; i++){
        dp[i] = -1e9;
    }

    dp[0] = 0;
    for(int i=1; i<=n; i++){
        if(i >= a){
            dp[i] =max(dp[i-a] + 1 , dp[i]);
        }
        if(i >= b){
            dp[i] =max(dp[i-b] + 1, dp[i]);
        }
        if(i >= c){
            dp[i] =max(dp[i-c] + 1, dp[i]);
        }
    }
    cout << dp[n]<< endl;
return 0;
}




