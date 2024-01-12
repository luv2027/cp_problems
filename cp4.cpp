#include<bits/stdc++.h>
using namespace std;

long long factor(long long p, long long q){
    long long ans = 0;
    long long  lim = sqrt(p);
    for(long long i=1; i<=lim; i++){
        if(p%i == 0){
            if(i%q != 0){
                ans = max(ans, i);
            }
            if((p/i)%q != 0){
                ans = max(p/i, ans);
            }

        }
    }
    return ans;
}


int main(){
    int t;
    cin >> t;
    while(t--){
            int p, q;
            cin >> p >> q;
            cout << factor(p, q) << endl;
    }
return 0;
}

