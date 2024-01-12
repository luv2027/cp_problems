#include<bits/stdc++.h>
using namespace std;


void solve(){

        int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    string t(k, '?');
    for(int i=0; i<n; i++){
        if(t[i%k] == '?'){
            t[i%k] = s[i];
        }
        if(t[i%k] != '?' && s[i] != '?'){
            if(t[i%k] != s[i]){
                cout << "NO" << endl;
                return ;
            }
        }
    }

    int c0 = count(t.begin(), t.end(), '0');
    int c1 = count(t.begin(), t.end(), '1');

    if(c1 <= k/2 && c0<=k/2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return;
}

int main(){
    int T;
    cin >> T;

    while(T--){
        solve();
    }
    return 0;
}
