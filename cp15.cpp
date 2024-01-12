#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll n;
    cin >> n;
    if(n<=2){
        cout << -1 << endl;
        return 0;
    }
    if(n%2 == 1){
                    ll k = (n*n)/2;
                    cout << k << " " << k + 1 << endl;
    }
    else if(n%4 == 2){
        ll new_n = n/2;
        ll k = (new_n*new_n)/2;
        cout << 2*(k) << " " << 2*(k + 1) << endl;
    }
    else{
        cout << 3* n/4 << " " << 5* n/4 << endl;
    }
return 0;
}
