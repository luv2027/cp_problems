#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    ll a[n];
    ll sum =0;
    for(int i=0; i<n ;i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum%n == 0){
        cout << n << endl;
    }
    else{
        cout << n-1 << endl;
    }
return 0;
}
