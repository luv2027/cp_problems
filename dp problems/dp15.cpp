#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll dp[1000010];
ll a[1000010];

int main(){
    ll x;
    cin >> n >> x;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<=x; i++){
        dp[i] = INT_MAX;
    }

    for(int i=0; i<=x; i++){
            if(i == 0){
                dp[i] = 0;
            }
            else{
                for(int j=0; j<n; j++){
                    if(i - a[j] >= 0){
                        dp[i] = min(dp[i], 1+ dp[i - a[j]]);
                    }
            }
        }
    }

    if(dp[x] == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << dp[x] << endl;
    }

    return 0;
}

