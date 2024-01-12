#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    int a, b;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.push_back(make_pair(a,b));

        if(a < mini){
            mini = a;
        }
        if(b > maxi){
            maxi = b;
        }
    }

    int ans =-1;

    for(int i=0; i<n; i++){
        if(v[i].first == mini && v[i].second == maxi){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
return 0;
}
