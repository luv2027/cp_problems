#include<bits/stdc++.h>
using namespace std;

int dp[10100][10100];

int solve(int x, int y){
    if(x == 0 && y == 0){
        return 0;
    }

    if(dp[x][y] != -1){
        return 1;
    }

    int ans = 0;
    for(int i=0; i<x; i++){
        if(solve(i, y) == 0){
            ans = 1;
            break;
        }
    }


    for(int j=0; j<y; j++){
        if(solve(x, j) == 0){
            ans = 1;
            break;
        }
    }

    for(int i=1; i<min(x, y); i++){
        if(solve(x-i, y-i) == 0){
            ans = 1;
            break;
        }
    }

    return dp[x][y] = ans;
}

int main(){
    int x, y;
    cin >> x >> y;

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            dp[i][j] = -1;
        }
    }

    if(solve(x, y) == 0){
        cout << "1st player" << endl;
    }
    else{
        cout << "2nd player" << endl;
    }
return 0;
}
