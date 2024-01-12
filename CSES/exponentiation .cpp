#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a, b;
    cin >> t;
    while(t--){
    cin >> a >> b;
    long long mod = 1000000007;

    long long res = 1;
    while(b > 0){
         if(b%2 == 1){
             res = ((res%mod)*(a%mod))%mod;
             b = b-1;
         }
         else {
             a = ((a%mod)*(a%mod))%mod;
             b/=2;
         }
    }
    cout<<res << endl;
    }
   return 0;
}
