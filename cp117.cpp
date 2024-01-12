#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int f[1001];
    for(int i=0; i<1001; i++){
        f[i] = 0;
    }


    for(int i=0; i<n; i++){
        cin >> a[i];
        f[a[i]]++;
    }

    int maxif =0;
    for(int i=0; i<1001; i++){
        if(f[i] > maxif){
            maxif = f[i];
        }
    }

    int f_others = n - maxif;
    if(f_others >= n/2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
