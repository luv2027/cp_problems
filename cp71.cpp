#include<bits/stdc++.h>
using namespace std;

const int maxm = 1e7+1;
int isprime[maxm];
vector<int> primes;

void seive(){
    for(int i=0; i<maxm; i++){
        isprime[i] = 1;
    }
     for(int i=2; i*i<maxm; i++){
        if(isprime[i] == 1){
            for(int j= i*i; j<maxm; j+= i){
                isprime[j] = 0;
            }
        }
     }

     for(int i=2; i<maxm; i++){
        if(isprime[i] == 1){
            primes.push_back(i);
        }
     }
}

int main(){
    int n;
    cin >>n;
    seive();

    int size1 = primes.size();
    int c;
    for(int i=0; i<size1; i++){
        if(primes[i] <= n){
            c++;
        }
    }

    cout << c << endl;

    for(int i=0; i<c; i++){
        cout << primes[i] << " ";
    }

    return 0;
}
