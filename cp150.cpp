#include<bits/stdc++.h>
using namespace std;
const int maxm = 1e6+1;
typedef long long ll;
ll f[maxm];

void counting(){
    f[0] = 0;
    f[1] = 1;
    for(int i=2; i<maxm; i++){
        int ans = 2;
        for(int j=2; j*j <= i; j++){
            if(i%j == 0){
                if(j == i/j){
                    ans += 1;
                }
                else{
                    ans += 2;
                }
            }
        }
        f[i] = ans;
    }

    for(int i=1; i<maxm; i++){
        f[i] += f[i-1];
    }
}

int main(){
    int n;
    cin >>n;

    counting();
    ll ans = f[n];
    cout << ans << endl;
return 0;
}
