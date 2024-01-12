#include<bits/stdc++.h>
using namespace std;
int a[100001];
int dp[100001];
int n;

int rec(int level){
    if(level < 0){
        return 0;
    }

    if(dp[level] != -1){
        return dp[level];
    }

    int ans= 1;
    for(int prev_taken=0; prev_taken< level; prev_taken++){
        if(a[level] > a[prev_taken]){
            ans = max(ans, 1+ rec(prev_taken));
        }
    }

    return dp[level] = ans;
}

int main(){
    cin >> n;
    memset(dp, -1, sizeof(dp));

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int mx = 0;
    for(int i=0; i<n; i++){
        mx = max(mx, rec(i));
    }

    cout << mx << endl;
return 0;
}
