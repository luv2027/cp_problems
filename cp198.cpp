#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    ll mat[n][3];
    for(int i=0; i<n; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        mat[i][0] = a;
        mat[i][1] = b;
        mat[i][2] = c;
    }

    vector<ll> arr(n, -1);
    vector<ll> brr(n, -1);
    vector<ll> crr(n, -1);

    arr[0] = mat[0][0];
    brr[0] = mat[0][1];
    crr[0] = mat[0][2];

    for(int i=1; i<n; i++){
        arr[i] = max(brr[i-1] , crr[i-1]) + mat[i][0];
        brr[i] = max(arr[i-1] , crr[i-1]) + mat[i][1];
        crr[i] = max(arr[i-1] , brr[i-1]) + mat[i][2];
    }

    cout << max(arr[n-1], max(brr[n-1], crr[n-1])) << endl;
return 0;
}
