#include<bits/stdc++.h>
using namespace std;
int n, t;
bool dp[105][10100];
vector<int> item;

bool solve(int level, int s){
    if(s > t){
        return false;
    }
    if(t == s){
        return true;
    }

    if(level == n+1){
        if(t == s){
            return true;
        }
        return false;
    }

    if(dp[level][s] != false){
        return true;
    }

    bool ans = false;
    if(solve(level+1, s) == true){
        ans = true;
    }
    else if(solve(level+1, s+ item[level]) == true){
        ans = true;
    }
    return dp[level][s] = ans;
}

int main(){
    cin >> n >> t;
    item.resize(n+1);
    for(int i=1; i<=n; i++){
        cin >> item[i];
    }
    cout << solve(1, 0) << endl;
return 0;
}
