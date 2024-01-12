#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
            int a, b, n;
            cin >> a >> b >> n;
            int  ar[n];
            for(int i=0; i<n; i++){
                cin >> ar[i];
            }

            long long ans = b;
            for(int i=0; i<n; i++){
                int mini = min(ar[i], a-1);
                ans += mini;
            }
            cout << ans << endl;
    }
return 0;
}
