#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
            int n;
            cin >> n;

            int a[n];
            for(int i=0; i<n; i++){
                cin >> a[i];
            }

            sort(a, a+n);
            long long ans = a[0]+1;
            for(int i=1; i<n; i++){
                ans *= a[i];
            }
            cout << ans << endl;
    }
return 0;
}
