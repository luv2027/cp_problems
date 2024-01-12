#include<bits/stdc++.h>
using namespace std;

const long long  mod = 1e9 + 7;
const int MAXN = 1e6;

long long power(long long a, long long b){
    if(b== 0){
        return 1;
    }

    long long x = power(a, b/2);
    if(b%2 == 0){
        return (x*x)%mod;
    }
    else{
        long long ans = (x*x)%mod;
        return (ans*a)%mod;
    }
}

long long inverse(long long a){
    return power(a, mod - 2) % mod;
}

long long fact[MAXN];
long long invfact[MAXN];

void factorial(){
    fact[0] = 1;
    invfact[0] = 1;

    for(long long  i=1; i<MAXN; i++){
        fact[i] = (fact[i-1] * i)%mod;
        invfact[i] = inverse(fact[i]) % mod;
    }
}

long long ncr(long long n, long long r){
    if(n<0 || r<0 || n<r){
        return 0;
    }
    long long num = fact[n];
    long long dem = (invfact[r] * invfact[n-r]) % mod;
    return  num*dem %mod;
}


int main(){
    factorial();
    int t;
    cin >> t;
    while(t--){
        int n, r;
        cin >> n >> r ;
        cout << ncr(n, r) << endl;
    }
    return 0;
}
