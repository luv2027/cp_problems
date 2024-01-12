#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll maxm = 1e7+1;
vector<ll> primes;
int isprimes[maxm];

void seive(){
    for(int i=0; i<maxm; i++){
        isprimes[i] = true;
    }

    for(ll i=2; i*i<=maxm; i++){
        if(isprimes[i] == true){
            for(ll j=i*i; j<maxm; j+=i){
                isprimes[j] = false;
            }
        }
    }

    for(ll i=2; i<maxm; i++){
        if(isprimes[i] == true){
            primes.push_back(i);
        }
    }
}


int main(){
    int n;
    cin >> n;

    seive();
    for(int i=0; i<n; i++){
        cout << primes[i] << " ";
    }
    cout << endl;
return 0;
}
