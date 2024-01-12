#include<bits/stdc++.h>
using namespace std;
int n, t;
bool dp[105][10100];
vector<int> item;

bool solve(int level, int left){
    if(left < 0){
        return false;
    }
    if(left == 0){
        return true;
    }

    if(level == n+1){
        if(left == 0){
            return true;
        }
        return false;
    }

    if(dp[level][left] != false){
        return true;
    }

    bool ans = false;
    if(solve(level+1, left) == true){
        ans = true;
    }
    else if(solve(level+1, left - item[level]) == true){
        ans = true;
    }
    return dp[level][left] = ans;
}

void printset(int level, int left){
    if(level == n+1){
        return ;
    }

    if(solve(level+1, left) == true){ // if we are not taking than it is giving me 1 so explore the next state
        printset(level+1, left);
    }else if(solve(level + 1, left - item[level])== true){
        //we are taking the value and that is giving me ans;
        // so printing it
        cout << item[level] << " ";
        printset(level+1, left-item[level]);
    }
}

int main(){
    int test;
    cin >> n;
    item.resize(n+1);
    for(int i=1; i<=n; i++){
        cin >> item[i];
    }
    memset(dp, false, sizeof(dp));
    cin >> test;
    while(test--){

    cin >>  t;
    if(solve(1, t)){
        printset(1, t);
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }
    }
return 0;
}
