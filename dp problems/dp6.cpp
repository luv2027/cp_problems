#include<bits/stdc++.h>
using namespace std;

int dp[3001][3001];
int n, m;
string s, t;

int solve(int i, int j){
    if(i == n || j == m){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int ans = 0;
    if(s[i] == t[j]){
        ans = 1+ solve(i+1, j+1);
    }
    else{
        ans = max(solve(i+1, j), solve(i, j+1));
    }

    return dp[i][j] = ans;
}

string a="";
void printsol(int i, int j){
    if(i== n || j== m){
        return ;
    }

    if(solve(i, j) == solve(i+1, j)){
        printsol(i+1, j);
    }
    else if(solve(i, j) == solve(i, j+1)){
        printsol(i, j+1);
    }
    else{
        a += s[i];
        printsol(i+1, j+1);
    }
}

int main(){
    cin >> s >> t;
    n = s.length();
    m = t.length();
    memset(dp, -1, sizeof(dp));
    solve(0, 0);
    printsol(0, 0);
    cout << a << endl;
return 0;
}
