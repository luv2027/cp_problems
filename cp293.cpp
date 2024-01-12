#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        string s;
        cin >> s;

        int f = -1;
        int l = -1;
        int n = s.size();

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                f = i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(s[i] == '1'){
                l = i;
                break;
            }
        }

        if(f == l && f == -1){
            cout << 0 << endl;
            continue;
        }

        int ans = a;

        for(int i=f; i<=l; i++){
            int c = 0;
            while(s[i] == '0'){
                c++;
                i++;
            }

            ans += min(a, b*c);
        }

        cout << ans << endl;
    }

return 0;
}
