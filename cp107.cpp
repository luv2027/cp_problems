#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a(n-2);
        for(int i=0; i<n-2; i++){
            cin >> a[i];
        }

        string ans = "";
        bool isfound = false;

        for(int i=0; i<n-3; i++){
            ans += a[i][0];
            if(a[i][1] != a[i+1][0]){
                ans += a[i][1];
                isfound = true;
            }
        }
        ans += a[n-3];
        if(!isfound){
            ans += 'a';
        }
        cout << ans << endl;
    }

return 0;
}
