#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int pre[n+2] ;
        int suff[n+2] ;

        memset(pre, -1, sizeof(pre));
        memset(suff, -1, sizeof(suff));


        int c = 0;
        if(s[0] - '0' == 1){
            pre[0] = 0;
        }
        if(s[n-1] - '0' == 1){
            suff[n-1] = n-1;
        }


        for(int i=1; i<n; i++){
            if(s[i] - '0' == 1){
                pre[i] = i;
            }
            else{
                pre[i] = pre[i-1];
            }
        }

        for(int i =n-2; i>=0; i--){
            if(s[i] - '0' == 1){
                suff[i] = i;
            }
            else{
                suff[i] = suff[i+1];
            }
        }

        int ans = 0;
        int val1, val2;

        for(int i=0; i<n; i++){
            val1 = val2 = INT_MAX;

            if(pre[i] != -1){
                val1 = i-pre[i];
            }
            if(suff[i] != -1){
                val2 = suff[i] - i;
            }

            if(min(val1, val2) > k){
                ans++;
                pre[i] = i;
            }
            if(pre[i+1] < pre[i]){
                pre[i+1] = pre[i];
            }

        }

        cout << ans << endl;
    }

return 0;
}
