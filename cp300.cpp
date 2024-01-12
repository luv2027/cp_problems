#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 1e9;
        for(int i=0; i<n; i++){
            vector<int>mp(3, 0);
            mp[s[i] - 'a']++;
            for(int j=i+1; j<min(i+7, n); j++){
                mp[s[j] - 'a']++;
                if(mp[0]> mp[1] && mp[0] > mp[2]){
                    ans = min(ans, j-i+1);
                }
            }
        }

        if(ans == 1e9){
            cout << -1 <<  endl;
        }
        else{
            cout << ans << endl;
        }
    }

return 0;
}
