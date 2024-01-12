#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int f =0;
        long long s =0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == 1){
                f++;
            }
            s+= a[i];
        }

        if(s-n >= f && n!=1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}
