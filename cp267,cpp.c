#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, l, r;
        cin >> n >> l >> r;

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int c =0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if((a[i]+a[j]>=l) && (a[i]+a[j]<=r)){
                    c++;
                }
            }
        }
        cout << c << endl;
    }
return 0;
}

