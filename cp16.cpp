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
    ll x, y;
    if(n%2 == 1){
        x = 1;
        y = n*n;
    }
    else{
        x = 2;
        y = (n*n)/2;
    }

    cout << (y-x)/2  << " " << (x+y)/2 << endl;
    return 0;
}


