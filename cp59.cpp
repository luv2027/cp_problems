#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a, b, c;
    cin >> a >> b >> c;

    ll l;
    int ans = 0;
    ll mxm = 1e4+1;
    for(ll i=1; i<mxm; i++){
        if((c/i)*(b/i) == a){
            ans = 1;
            l = i;
            break;
        }
        if((a/i)*(c/i) == b){
            ans = 2;
            l = i;
            break;
        }
        if((a/i)*(b/i) == c){
            ans = 3;
            l = i;
            break;
        }
    }

    ll h, b1;
    if(ans == 1){
        h = c/l;
        b1 = b/l;
    }
    else if(ans == 2){
        h = a/l;
        b1 = c/l;
    }
    else{
        h = a/l;
        b1 = b/l;
    }

    ll ans1 ;
    ans1 =  4*(l + b1 + h);
    cout << ans1 << endl;
    return 0;
}
