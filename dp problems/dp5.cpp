#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll weight[101];
ll value[101];

const ll inf = 1e5;
ll dp[105][inf];

int main(){
    int n, w;
    cin >> n >> w;

    for(int i=0; i<n; i++){
        cin >> weight[i] >> value[i];
    }

    for(int val=0; val<n; val++){
        for(int wt=0; wt<w; wt++){
            if(val == 0){
                if(wt > 0){
                    dp[val][wt] = inf;
                }
                else{
                    dp[val][wt] = 0;
                }
            }
            else{
                ll pick = inf;
                if(value[val - 1] < wt){
                    pick = dp[val-1][w - wt] + value[val - 1];
                }
                ll dont_pick = dp[val - 1][wt];

                dp[val][wt] = min(pick, dont_pick);
            }
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j= 0; j<inf; j++){
            if(dp[i][j] <= w){
                ans = max(ans, j);
            }
        }
    }

    cout <<ans << endl;
return 0;
}
