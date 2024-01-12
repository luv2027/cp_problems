#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    string a;
    cin >> a;

    bool typeable[26] = {0};
    for(int i=0; i<k; i++){
        char c;
        cin >> c;
        typeable[c-'a'] = 1;
    }


    for(int i=0; i<n; i++){
        if(typeable[a[i] - 'a']){
            a[i] = '1';
        }
        else{
            a[i] = '0';
        }
    }

    long long dp[n + 1];
    long long ans = 0;

    for(int i=0; i<n; i++){
        if(a[i] == '0'){
            dp[i+1] = 0;
        }else{
            dp[i+1] = dp[i] + 1;
        }

        ans += dp[i+1];
    }
    cout << ans << endl;
    return 0;
}
