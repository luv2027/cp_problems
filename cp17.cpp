#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 1e5;
vector<ll> primes;
bool isprime[MAXN] = {true};

void prime_seive(){
    isprime[1] = false;
    for(ll  i= 2; i*i <= MAXN; i++){
        if(isprime[i]){
            for(ll j=i*i; j<MAXN; j+=i){
                isprime[j] = false;
            }
        }
    }
    for(ll i=0; i<MAXN; i++){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
}

ll factor_nk(int n, int k){
    ll ans = 0;
    for(int p:primes){
        if(n%p == 0){

            //if p is a prime factor of N
            int power_of_p = 0;
            int m = n;
            while(m%p == 0){
                m/=p;
                power_of_p++;
            }

            //N = p1^power_of_p1 * p2^power_of_p2
            if(p == 2){

                //power of 2 in N^2/4 would be 2*power of p - 2;
                ans = (ans * (k * power_of_p -2 + 1));
            }else{
            ans = (ans * (k * power_of_p + 1));
            }
        }
    }
    //ans = factors(N^2 / 4) if N is even
    //ans = factors(N^2) if N is odd
    return ans * 2;
}

