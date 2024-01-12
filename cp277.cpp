#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
            int x, y, k;
            cin >> x >> y >> k;

            int ans = 0;
            if(y < x){
                ans = x;
            }
            else{
                if(x+k < y){
                    ans += (x+k);
                    ans = ans +(2*(y-(x+k)));
                }
                else{
                    ans = y;
                }
            }

            cout << ans << endl;
    }
return 0;
}
