#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, we;
ll dp[101][(int)1e5+1];

//here dp[i][j] depicts the maximum value i can get by picking up the element
//with keeping in mind the constraints that is weight

int main(){
    cin >> n >> we;

    vector<int> v(n);
    vector<int> w(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<we; j++){
            dp[i][j] = -1;
        }
    }

    for(int i=0; i<n; i++){
        cin >> w[i] >> v[i];
    }

    for(int i=0; i<=n; i++){
        for(int j=0; j<=we; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else{
                ll dont_pick = dp[i-1][j];
                ll pick = 0;
                if(w[i-1] <= j){
                    pick = dp[i-1][j - w[i-1]] + v[i-1];
                }
                dp[i][j] = max(dont_pick, pick);
            }
        }
    }

    cout << dp[n][we] << endl;
return 0;
}
