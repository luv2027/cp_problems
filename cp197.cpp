#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> dp(n, -1);

    dp[0] = 0;
    for(int i=1; i<n; i++){
            int ans = 1e9;
        for(int steps=1; steps<=k; steps++){
            if(i-steps >= 0){
                ans = min(ans, dp[i-steps] + abs(v[i] - v[i-steps]));
            }
            dp[i] = ans;
        }
    }
    cout << dp[n -1] << endl;
return 0;
}
