#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> mp;
    int a, b, c;
    cin >> a >> b >> c;
    mp[a] = 1;
    mp[b] = 2;
    mp[c] = 3;
    m--;
    while(m--){
        cin >> a >> b >> c;
        if(mp.find(a) == mp.end() && mp.find(b) == mp.end() && mp.find(c) == mp.end()){
            mp[a] = 1;
            mp[b] = 2;
            mp[c] = 3;
        }
        else if(mp.find(a) != mp.end()){
            int d = mp[a];
            if(d == 1){
                mp[b] = 2;
                mp[c] = 3;
            }
            else if(d == 2){
                mp[b] = 1;
                mp[c] = 3;
            }
            else{
                mp[b] = 1;
                mp[c] = 2;
            }
        }
        else if(mp.find(b) != mp.end()){
            int d = mp[b];
            if(d == 1){
                mp[a] = 2;
                mp[c] = 3;
            }
            else if(d == 2){
                mp[a] = 1;
                mp[c] = 3;
            }
            else{
                mp[a] = 1;
                mp[c] = 2;
            }
        }
        else{
            int d = mp[c];
            if(d == 1){
                mp[b] = 2;
                mp[a] = 3;
            }
            else if(d == 2){
                mp[b] = 1;
                mp[a] = 3;
            }
            else{
                mp[b] = 1;
                mp[a] = 2;
            }
        }
    }

    for(int i=1; i<=n; i++){
        cout << mp[i] << " ";
    }
    cout << endl;

return 0;
}
