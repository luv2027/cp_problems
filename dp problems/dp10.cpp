#include<bits/stdc++.h>
using namespace std;
int n;
double dp[301][301][301];

double solve(int i, int j, int k){
    if(i<0 || j<0 || k<0){
        return 0;
    }

    if(i== 0 && j==0 && k==0){
        return 0;
    }

    if(dp[i][j][k] > 0){
        return dp[i][j][k];
    }

    dp[i][j][k] = double(n+ i*solve(i-1, j, k) + j*solve(i+1, j-1, k) + k*solve(i, j+1, k-1))/double(i+j+k);
    return dp[i][j][k];
}


int main(){

    cin >>  n;
    vector<int> count1(4, 0);
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        count1[v[i]]++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k = 0; k<n; k++){
                dp[i][j][k] = -1.0;
            }
        }
    }

    cout <<fixed<< setprecision(15) <<  solve(count1[1], count1[2], count1[3]) << endl;
return 0;
}
