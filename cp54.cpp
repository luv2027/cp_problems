#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    const int MAXM = 1e5+1;
    vector<int> a(MAXM);
    for(int i=1; i<=n; i++){
        int c ;
        cin >> c;
        a[c] = i;
    }

    int m;
    cin >> m;
    long long v = 0, p =0;

    while(m--){
        int b;
        cin >> b;
        v += a[b];
        p += n+1 - a[b];
    }

    cout << v << " " << p << endl;
return 0;
}
