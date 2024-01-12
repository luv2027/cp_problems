#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, x, y;

    cin >> n >> x >> y;

    ll t = ceil(y*n/float(100));
    ll ans = 0;
    if(t > x){
        ans = t- x;
    }
    cout << ans << endl;
return 0;
}
