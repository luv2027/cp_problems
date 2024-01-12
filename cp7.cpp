#include<bits/stdc++.h>
using namespace std;


long long  power(long long a, long long b, long long prime){
    if(b == 0){
        return 1;
    }

    long long x = power(a, b/2, prime);

    if(b%2 == 0){
        return (x*x)%prime;
    }
    return (x*x*a)%prime;
}


long long inverse(long long a, long long prime){
    return power(a, prime -2, prime) % prime;
}

int main(){
    int t;
    cin >> t;

    while(t--){
         long long  p1, p2, r1, r2;
    cin >> p1 >> p2 >> r1 >> r2;

    long long k = ((r2-r1) * inverse(p1, p2))%p2;

    cout << r1 + k*p1 << endl;
    }

   return 0;
}
