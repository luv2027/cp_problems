#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll a[n];
    for(int i=0; i<n-1; i++){
        cin >> a[i];
    }

    ll ans[n];
    ans[0] = (n-1)/2;

    for(int i=1; i<n; i++){
        ans[i] = ans[i-1]^a[i-1];
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
return 0;
}
