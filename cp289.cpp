#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        int pos_i = 0;
        while(pos_i < n && a[pos_i] < 0){
            pos_i++;
        }

        long long ans =0;
        int ind = n-1;
        while(ind >= pos_i){
            ans += a[ind] + a[ind];
            ind -= k;
        }

        for(int i=0; i<pos_i; i+=k){
            ans -= a[i]+ a[i];
        }

        int left = pos_i>0? -a[0]:0;
        int right = pos_i<n? a[n-1]: 0;

        ans -= max(left, right);

        cout << ans << endl;
    }
return 0;
}
