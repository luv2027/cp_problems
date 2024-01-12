#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    ll n = s.length();

    ll n_bk , n_sk, n_ck;
    cin >> n_bk >> n_sk >> n_ck;

    ll p_b, p_s, p_c;
    cin >> p_b >> p_s >> p_c;

    ll rupees;
    cin >> rupees;

    ll b = 0, sa = 0, c = 0;
    for(ll i=0; i<n; i++){
        if(s[i] == 'B'){
            b++;
        }
        else if(s[i] == 'S'){
            sa++;
        }
        else{
            c++;
        }
    }

    ll total = b*p_b + sa*p_s + c*p_c;
    ll ans = rupees/total;

    ll a = n_bk/b;
    ll d = n_sk/sa;
    ll e = n_ck/c;

    ans = ans +  min(a, min(d, e));
    cout << ans << endl;
return 0;
}
