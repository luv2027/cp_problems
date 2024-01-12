#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000010];
int check(int x){
    return(a[x] > a[x-1]);
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int lo = 1;
    int hi = n-1;
    int ans = a[0];

    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(check(mid)){
            ans = a[mid];
            lo = mid+1;
        }
        else{
            hi = mid -1;
        }
    }

    cout << ans << endl;
return 0;
}
