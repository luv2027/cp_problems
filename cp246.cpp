#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
           int n;
           cin >> n;

           int a[n];
           for(int i=0; i<n; i++){
                cin >> a[i];
           }

           long long ans = 0;
           int maxi = INT_MIN;
           for(int i=0; i<n; i++){
                while(i<n && a[i] < 0){
                    maxi = max(maxi, a[i]);
                    if(i+1< n && a[i+1] >= 0){
                        break;
                    }
                    i++;
                }

                while(i<n && a[i] >= 0){
                    maxi = max(maxi, a[i]);
                    if(i+1<n && a[i+1] < 0){
                        break;
                    }
                    i++;
                }

                ans += maxi;
                maxi = INT_MIN;
           }
           cout << ans << endl;
    }
    return 0;
}



