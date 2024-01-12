#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b > a){
        return gcd(b, a);
    }
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << n/2 << endl;
    }
    return 0;
}
