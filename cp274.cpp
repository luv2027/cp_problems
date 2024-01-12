#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n ;
        cin>> n;

        int a[n];
        for(int i=0; i<n; i++){
            cin>> a[i];
        }

        int f = 0;
        for(int i=0; i<n; i++){
            if(i > 2 && a[i-1] > a[i] && i!= 4 && i!=8 && i!=16){
                f = 1;
            }
        }

        if(f == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
return 0;
}
