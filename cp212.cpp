#include<bits/stdc++.h>
using namespace std;

int n;
bool dp[1001];

bool solve(int x){

    if(x == 0){
        return false;
    }

    if(dp[x] != false){
        return true;
    }

    bool ans = false;
    for(int i=0; (1<<i)<=x; i++){
        if(solve(x - (1<<i)) == 0){
            ans = true;
        }
    }
    dp[x] = ans;
}

int main(){
    cin >> n;
    if(solve(n) == true){
        cout << "1st player" << endl;
    }
    else{
        cout << "2nd player" << endl;
    }
return 0;
}
