#include<bits/stdc++.h>
using namespace std;

int dp[100100];
int n;
int a[101];

int solve(int k){
    if(dp[k] != -1){
        return 1;
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] <= k){
            if(solve(k - a[i]) == 0){
                ans = 1;
                break;
            }
        }
    }
    return dp[k] = ans;
}

int main(){
    cin >> n ;
    int k;
    cin>> k;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    memset(dp, -1, sizeof(dp));

    if(solve(k) == 1){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }
    return 0;
}
