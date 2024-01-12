#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        int a[n];
        int b[m];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<m; i++){
            cin >> b[i];
        }

        int mini=INT_MAX;
        for(int i=0; i<n; i++){
            if(a[i] < mini){
                mini = a[i];
            }
        }

        int maxi = INT_MIN;
        for(int i=0; i<m; i++){
            if(b[i] > maxi){
                maxi = b[i];
            }
        }

        long long ans = 0;
        if(k%2 == 0){
            for(int i=0; i<n; i++){
                ans += a[i];
            }
        }
        else{
            long long sum = 0;
            for(int i=0; i<n; i++){
                sum+= a[i];
            }
            ans = max(sum, sum+maxi-mini);
        }
        cout << ans << endl;
    }
return 0;
}
