#include<bits/stdc++.h>
using namespace std;

const int MAXN = 5e4;
bool isprime[MAXN] = {true};
vector<int> primes;

void prime_seive(){
    isprime[1] = isprime[0] = false;
    int lim = sqrt(MAXN);
    for(int i=2; i<=lim; i++){
        if(isprime[i]){
            for(int j=i*i; j<MAXN; j+=i){
                isprime[j] = false;
            }
        }
    }

    for(int i=2; i<MAXN; i++){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
}


vector<int> get_prime_factors(int q){
    vector<int> prime_factors;
        for(int u: primes){
            if(q%u == 0){
                prime_factors.push_back(u);

                while(q%u== 0){
                    q/=u;
                }
            }
        }

        if(q>1){
            prime_factors.push_back(q);
        }
        return prime_factors;
}


int main(){
    int t;
    cin >> t;
    while(t--){
            int p, q;
    cin >> p >> q;

    if(p%q != 0){
        cout << p << endl;
    }

    else{
        long long ans = 0;
        vector<int> prime_factor = get_prime_factors(q);
        for(int y : prime_factor){
            //y is the prime number ;

            long long x = p;
            while(x%q == 0){
                x/=y;
            }

            ans = max(ans, x);
        }

        cout << ans << endl;
    }
    }

    return 0;
}

