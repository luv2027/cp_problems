#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, R;
    cin >> N >> R;

    vector<vector<int> > ans(N+1, vector<int>(R+1));

    for(int n=1; n<=N; n++){
        for(int r = 0; r<=R; r++){
            if(ans[n][r] == 1){
                ans[n][r] = 1;
            }
            else{
                ans[n][r] = 0;
                for(int j=0; j<=R; j++){
                    ans[n][r] += ans[n-1][j];
                }
            }
        }
    }
    cout << ans[N][R] << endl;
    return 0;
}
