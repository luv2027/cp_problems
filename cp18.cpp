#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>> n;
    ll c4 = -1, c7 =0;

    for(ll no7 = n/7; no7>=0; no7--){
        if((n- 7*no7)%4 == 0){
            c4 = (n-7*no7)/4;
            c7 = no7;
            break;
        }
    }

    if(c4 == -1){
        cout << -1 << endl;
        return 0;
    }
    for(int i=0; i<c4; i++){
        cout << '4';
    }
    for(int i=0; i<c7; i++){
        cout << '7';
    }
    return 0;
}
