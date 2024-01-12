#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll dp[1000010];

set<int> getdigits(int x){
    set<int> d;
    while(x > 0){
        d.insert(x%10);
        x/=10;
    }
    return d;
}

int main(){
    cin >> n;
    memset(dp, -1, sizeof(dp));

    for(int i=0; i<=n; i++){
        if(i == 0){
            dp[i] = 0;
        }
        else{
            dp[i] = 1e9;
            for(auto d:getdigits(i)){
                dp[i] = min(dp[i], 1+ dp[i-d]);
            }
        }
    }
    cout << dp[n] << endl;
return 0;
}
