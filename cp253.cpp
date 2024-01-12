#include<bits/stdc++.h>
using namespace std;

int n;
int a[10000010];
int k;

int check(int x){
    int need = 0;
    for(int i=1; i<n; i++){
        int diff = a[i] - a[i-1];
        need += (diff + x -1)/x - 1;
    }
    return (need<=k);
}

int main(){
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int lo = 1;
    int hi = 1e9;
    int ans = 1e9;

    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(check(mid)){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid +1;
        }
    }

    cout << ans << endl;
    return 0;
}
