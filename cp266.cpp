#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, l, r;
        cin >> n >> l >> r;

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);
        int c=0;
        for(int i=0; i<n-1; i++){
            int start = i+1;
            int end1 = n-1;
            int ans = -1;
            while(start <= end1){
                int mid = (start+end1)/2;
                if((a[i]+a[mid]) >= l && (a[i]+a[mid])<=r){
                    ans = mid;
                    end1 = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            if(ans == -1){
                continue;
            }
            else{
                 c += (n-ans);
            }
        }

        cout << c << endl;
    }
return 0;
}
