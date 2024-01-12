#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
       int n;
       cin >> n;

       int c =0;
       int a[n];
       int j = 0;
       for(int i=1; i<1e9; i+=2){
            if(c < n){
                a[j] = i;
                j++;
                c++;
            }
            else{
                break;
            }
       }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
return 0;
}
