#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m, d;
    cin >> n >> m >> d;

    ll a[n*m];
    for(int i=0; i<n*m; i++){
        cin >> a[i];
    }

    sort(a, a+(n*m));
    ll target = a[n*m/2];

    ll ans = 0;
    int f = 0;
    for(int i=0; i<n*m; i++){
        if(target > a[i]){
           double t = (target-a[i])/float(d);
           if(t == floor(t)){
            ans += t;
           }
           else{
            f = 1;
            break;
           }
        }
        else{
            double t = (a[i] - target)/float(d);
           if(t == floor(t)){
            ans += t;
           }
           else{
            f = 1;
            break;
           }
        }
    }

    if(f == 1){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
return 0;
}
