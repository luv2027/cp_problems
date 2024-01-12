//you are given p and q. where x is the factor of p and x cant be multiple of q; you need to find x;

#include<bits/stdc++.h>
using namespace std;

const long long MAXM = 5e4;
bool is_prime[MAXM] = {true};
vector<long long > primes;

void prime_seive(){
    is_prime[0] = is_prime[1] = false;
    long long lim = sqrt(MAXM);
    for(long long i = 2; i<=lim; i++){
        if(is_prime[i]){
            for(long long j = i*i; j<MAXM; j+=i){
                is_prime[i] = false;
            }
        }
    }

    for(long long i=2; i<MAXM; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
}

vector<long long > prime_factors_of_q(long long q){
    vector<long long > prime_factors;
    for(long long u:primes){
        if(q%u == 0){
            prime_factors.push_back(u);
            while(q%u == 0){
                q /= u;
            }
        }

        if(u*u > q){
            break;
        }
    }
    if(q > 1){
        prime_factors.push_back(q);
    }
    return prime_factors;
}

int main(){
    int t;
    cin >> t;
    prime_seive();
    while(t--){

        long long  p, q;
        cin >> p >> q;

        if(p%q != 0){
            cout << p << endl;
            return 0;
        }
        vector<long long > factors_q = prime_factors_of_q(q);
        long long ans = 0;

        for(long long a:factors_q){
            long long x = p;
            while(x%q == 0){
                x /= a;
            }
        ans = max(ans, x);
        }

        cout << ans << endl;
    }
}

