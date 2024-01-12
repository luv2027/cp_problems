#include<bits/stdc++.h>
using namespace std;

int n;
int t[1001];
int s[1001];
int taken[1001];
int k;

bool check(int level){
    int time = 0;
    int item = 0;

    for(int i=0; i<level; i++){
        if(taken[i] == 1){
            time += t[i];
            item++;
        }
    }

    if(item+1 <= k){
        taken[level] = 1;
        return 1;
    }
    return 0;
}

int rec(int level){
    if(level == n){
        return 0;
    }

    int ans = rec(level + 1);

    if(check(level)){
        taken[level] = 1;
        ans = max(ans, s[level] + rec(level+ 1));
        taken[level] = 0;
    }
    return ans;
}

int main(){
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> s[i] >> t[i];
    }

    cout << rec(0) << endl;
return 0;
}
