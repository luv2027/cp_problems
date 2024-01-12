#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int MINI = INT_MAX;
    int MAXI = INT_MIN;
    int maxi = 0;
    int mini = 0;

    for(int i=0; i<n; i++){
        if(a[i] <= MINI){
            MINI = a[i];
            mini = i;
        }
        if(a[i] > MAXI){
            MAXI = a[i];
            maxi = i;
        }
    }

    if(MAXI == MINI){
        cout << 0 << endl;
        return 0;
    }

    int d1 = maxi;
    int d2 = n - mini - 1 ;

    if(mini < maxi){
        cout << d1 + d2 -1 << endl;
        return 0;
    }
    cout << d1 + d2 << endl;
    return 0;
}
