#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

ll fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    t=1;;
    for (int tt = 0; tt < t; tt++)
    {
        ll n;
        cin >> n;
        ll r = n / 2;

        ll ans = (fact(n) / (fact(r) * fact(n - r))) / 2 * fact(n / 2 - 1) * fact(n / 2 - 1);
        cout << ans << "\n";
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
