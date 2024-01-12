#include<bits/stdc++.h>
using namespace std;

int n;
int a[10000010];

int check(int x, int A){
    return (a[x] >= A);
}

int main(){
    cin >> n;
    int A;
    cin >> A;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(check(mid, A)){
            ans = a[mid];
            hi = mid - 1;
        }
        else{
            lo = mid+1;
        }
    }

    cout << ans << endl;
    return 0;
}
