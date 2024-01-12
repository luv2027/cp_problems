#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int cnt[30];
    for(int i=0; i<30; i++){
        cnt[i]=0;
     }

     for(int i=0; i<n; i++){
        int x;
        cin >> x;

        for(int j=0; j<30; j++){
            if((x>>j)&1){
                cnt[j]++;
            }
        }
     }

     ll ans = 0;
     for(int i=0; i<30; i++){
        ll temp = 1ll * cnt[i]*(n-cnt[i]);
        ans += (1ll* temp*(1<<i));
     }

     cout << ans << endl;
return 0;
}
