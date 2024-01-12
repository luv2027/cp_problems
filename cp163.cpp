#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<long long> p1(n);
    p1[0] = v[0];
    for(int i=1; i<n; i++){
        p1[i] = p1[i-1] + v[i];
    }

    sort(v.begin(), v.end());
    vector<long long> p2(n);
    p2[0] = v[0];
    for(int i=1; i<n; i++){
        p2[i] = p2[i-1] + v[i];
    }

    int t;
    cin >> t;
    while(t--){
        int type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;

        long long ans = 0;
        if(type == 1){
            if(l == 0){
                ans = p1[r];
            }
            else{
                ans = p1[r] - p1[l-1];
            }
        }
        else if(type == 2){
            if(l == 0){
                ans = p2[r];
            }
            else{
                ans = p2[r] - p2[l-1];
            }
        }
        cout << ans << endl;
    }
return 0;
}
