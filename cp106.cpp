#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        ll ans =0;
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());

        for(int i=0; i<k; i++){
            ans += a[i+k]/a[i];
        }

        for(int i=2*k; i<n; i++){
                ans+= a[i];
        }

        cout << ans << endl;
    }
    return 0;
}
