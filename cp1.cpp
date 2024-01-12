#include<bits/stdc++.h>
using namespace std;

int main(){
    const int maxi = 1e5+5;
    int n;
    cin >> n;

    for(int i=1; i<n; i++) {
        int count = 0;
        if(is_almost_prime(i)) {
            count++;
        }
        cout << count << endl;
    }

    bool is_almost_prime(int n) {
        int lim = sqrt(n);
        for(int i=1; i<=lim; i++){
            if(n%i==0){
                if(i!= n/i && isprime[i] == 1 && isprime[n/i] == 1){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }

    int isprime[maxi] = {-1};
    bool is_prime(int n) {
            int lim1 = sqrt(n);
            
           for(int i=2; i<= lim1; i++){
                if(n%i==0){
                    isprime[n] = 0;
                }
           }

           if(isprime[n] == -1){
                 isprime[n] = 1;
           }
    }


}