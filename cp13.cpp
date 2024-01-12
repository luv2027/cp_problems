#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m ;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    if(n > m){
        cout << 0 << endl;
    }
    else{
        ll ans = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                ans = (abs(a[i]- a[j]) * ans)%m;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

