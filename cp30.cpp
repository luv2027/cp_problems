#include<bits/stdc++.h>
using namespace std;

int MAXN = 51;
bool isprime[51];


void seive_prime(){
    for(int i=1; i<51; i++){
        isprime[i] = 1;
    }

    isprime[1] = 0;
    for(int i=2; i*i<=MAXN; i++){
        if(isprime[i] == 1){
            for(int j=i*i; j<MAXN; j+=i){
                isprime[j] = 0;
            }
        }
    }
}

int main(){
    seive_prime();
    int n, m;
    cin >> n >> m;

    for(int i=n+1; i<=m; i++){
        if(isprime[i] == 1 && i!=m){
            cout << "NO" << endl;
            return 0;
        }
    }
    if(isprime[m] == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
