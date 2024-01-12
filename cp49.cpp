#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int kl = (k*l)/nl;
    int real_p = p/np;
    int cd = c*d;

    int ans = min(kl, real_p);
    ans = min(ans, cd);
    ans /= n;
    cout << ans << endl;

return 0;
}
