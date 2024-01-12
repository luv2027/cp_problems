#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int dp[n+1];

    dp[0] = 0;
    for(int i=1; i<n; i++){
        int mini = INT_MAX;
        for(int j=0; j<=k; j++){
                if(j- i >=0){
                    mini = min(dp[i-j] + abs(a[i] - a[i-j]),mini);
                }

        }
       dp[i] = mini ;
    }
    cout << dp[n-1]<< endl;
    return 0;
}

