#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
    ll a[7];
    for(int i=0; i<7; i++){
        cin >> a[i];
    }

    ll a1 = a[0];
    ll b = a[1];
    ll c = a[6] - a1 - b;

    cout << a1 << " " << b << " " << c << endl;
    }
return 0;
}
