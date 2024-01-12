#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int ans = 0;

    ordered_set Aj, Bj;
    Bj.insert(v[0]);

    for (int i = 1; i < n; i++)
    {
        int a = Aj.order_of_key(v[i]);
        int b = Bj.order_of_key(v[i]);

        if (a == 0 && b != 0)
        {
            Aj.insert(v[i]);
            ans++;
        }

        Bj.insert(v[i]);
    }
    cout << ans << endl;
    }
    return 0;
}
