#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;

    ll ans;
    if(k > ceil(n/2.0)){
        ll mid = (k - ceil(n/2.0));
        mid *= 2;
        ans = mid;
    }
    else{
        k--;
        ans = 2*k + 1;
    }
    cout << ans << endl;
return 0;
}
