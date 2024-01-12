#include<bits/stdc++.h>
using namespace std;

int n;
int queen[20];


int check(int level, int col){
    for(int row = 0; row<=level; row++){
        int prow = row;
        int pcol = queen[row];

        if(pcol == col || abs(prow - level) == abs(pcol - col)){
            return 0;
        }
    }
    return 1;
}

int rec(int level){
    if(level == n){
        return 1;
    }

    int ans = 0;
    for(int col = 0; col<n; col++){
        if(check(level, col)){
            queen[level] = col;
            ans += rec(level+1);
            queen[level] = -1;
        }
    }

    return ans;
}

int main(){
    memset(queen, -1, sizeof(queen));
    cin >> n ;
    cout << rec(0) << endl;
return 0;
}
