#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        double a, b, c;
        cin >>a >>b >> c;

        if(a == b){
            cout << 0 << endl;
        }
        else if(a > b){
            float mid = (a+b)/2.0;
            a -= mid;
            int  ans = ceil(a/float(c));
            cout << ans << endl;
        }
        else{
            float mid = (a+b)/2.0;
            b -= mid;
            int ans = ceil(b/float(c));
            cout << ans << endl;
        }
    }
return 0;
}
