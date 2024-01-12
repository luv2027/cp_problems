#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;

    vector<ll> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ll s=0;
    while(m--){
        ll a , b;
        cin >> a >> b;

        a--;
        b--;
        if(v[a] > v[b]){
            s += v[b];
        }
        else{
            s += v[a];
        }
    }

    cout << s << endl;
return 0;
}
