#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
            ll a, b, c;
    cin >> a >> b >> c;
            ll anna = a+ ceil(c/2.0);
            ll k = b + c/2;

            if(anna > k){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
    }
return 0;
}
