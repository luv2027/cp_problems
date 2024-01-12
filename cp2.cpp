#include<bits/stdc++.h>
using namespace std;

const int maxi = 1e6+5;

int isprime[maxi] = {1};
set<long long > my_bucket;

void prime_seive(){
    int lim = sqrt(maxi);
    isprime[0] = isprime[1] = 0;
    for(int i=2; i<=lim; i++){
        if(isprime[i]){
            for(int j=i*i; j<=maxi; j+=i){
                isprime[j] = 0;
            }
        }
    }

    for(int i=1; i<=maxi; i++){
        if(isprime[i]){
            my_bucket.insert(i*i);
        }
    }
}

bool has_three_divisor(int n){
    if(my_bucket.find(n) != my_bucket.end()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        return has_three_divisor(n);
    }
}