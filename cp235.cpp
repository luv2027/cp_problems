#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
            int n;
            cin >> n;

            vector<int>a(n);
            for(int i=0; i<n; i++){
                cin >> a[i];
            }

            int f = 0;
            for(int i=1; i<n; i++){
                if(a[i] <= a[i-1]){
                    f= 1;
                    break;
                }
            }

            if(f== 0){
                cout << 0 << endl;
                continue;
            }

            vector<int>suff(n);
            vector<int>pre(n);

            for(int i=n-2; i>=0; i--){
                suff[i] = suff[i+1] + (a[i] >= a[i+1]);
            }

            int x = 1;
            for(int i=1; i<n; i++){
                if(a[i] <= a[i-1]){
                    pre[i] = x;
                }
                else{
                    pre[i] = pre[i-1];
                }

                x += (a[i] >= a[i-1]);
            }

            int ans = n;

            for(int i=0; i<n; i++){
                ans = min(ans, suff[i] + pre[i]);
            }

            cout << ans << endl;
    }
return 0;
}
