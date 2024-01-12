#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long  a[n];

        for(int i=0; i<n ;i++){
            cin >> a[i];
        }

        long long val1 =0, val2 =0;
        for(int i=0; i<n; i+=2){
            val1 = __gcd(val1, a[i]);
        }

        for(int i=1; i<n; i+=2){
            val2 = __gcd(val2, a[i]);
        }

        bool ispossible1 = true, ispossible2= true;
        for(int i=0; i<n; i+=2){
            if(a[i] % val2 == 0){
                ispossible1 = false;
            }
        }

        for(int i=1; i<n; i+=2){
            if(a[i] % val1 == 0){
                ispossible2 = false;
            }
        }

        if(!ispossible1 && !ispossible2){
            cout << 0 << endl;
        }
        else if(!ispossible2){
            cout << val2 << endl;
        }
        else{
            cout << val1 << endl;
        }
    }
return 0;
}
