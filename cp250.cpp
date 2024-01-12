#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000010];

int check(int x){
    return a[x] >= a[0];
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int lo = 0;
    int hi = n-1;
    int ans = 0;

    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(check(mid)){
            lo = mid+1;
        }
        else{
            ans = mid;
            hi = mid-1;
        }
    }

    cout << ans << endl;
return 0;
}
