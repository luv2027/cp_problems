#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long > v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    if(n==1){
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << -v[0] << endl;
        return 0;
    }
    int l , r;
    l = 1, r = n;
    cout << l << " " << r  << endl;
    cout << 0 << " " ;
    for(int i=1; i<n; i++){
        cout << -(n*v[i]) << " ";
    }
    cout << endl;

    l=2 , r = n-1;
    cout << l << " " << r << endl;
    for(int i=1; i<n; i++){
        cout << ((n-1)*v[i]) << " ";
    }
    cout << endl;

    l=1, r=1;
    cout << l << " " << r << endl;
    cout << (n-1)*v[0];

return 0;
}
