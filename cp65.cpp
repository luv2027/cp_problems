#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector< int > a(m);
    for(int i=0; i<m; i++){
        cin >> a[i];
    }

    long long c = a[0] -1;
    for(int i=0; i<m-1; i++){
        if(a[i+1] < a[i]){
            c += n - a[i] + a[i+1];
        }
        else if(a[i+1] > a[i]){
            c += a[i+1] - a[i];
        }
    }
    cout << c << endl;
return 0;
}
