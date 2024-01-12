#include<bits/stdc++.h>
using namespace std;

vector<int> g[10100];
int dp[10100];
int n, m;

int solve(int x){
    if(dp[x] != -1){
        return dp[x];
    }

    int ans = 0;
    for(auto ele: g[x]){
        ans = max(ans, 1+ solve(ele));
    }

    return dp[x] = ans;
}

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    memset(dp, -1, sizeof(dp));

    int f_ans = 0;
    for(int i=1; i<=n; i++){
        f_ans = max(f_ans, solve(i));
    }
    cout << f_ans << endl;
return 0;
}
