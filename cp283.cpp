#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int max_dis = a[0];
        for(int i=1; i<n; i++){
            max_dis = max(max_dis, a[i] - a[i-1]);
        }

        max_dis = max(max_dis, 2*(x-a[n-1]));

        cout << max_dis << endl;
    }
return 0;
}
