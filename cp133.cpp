#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<string > v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> score(m);
    for(int i=0; i<m; i++){
        cin >> score[i];
    }

    long long ans =0;
    for(int i=0; i<m; i++){
        map<char, int> mp;
        for(int j=0; j<n; j++){
            mp[v[j][i]]++;
        }

        int maxi = 0;
        for(auto i:mp){
            maxi = max(maxi, i.second);
        }

        ans += maxi*score[i];
    }
    cout << ans << endl;
return 0;
}
