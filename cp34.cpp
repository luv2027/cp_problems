#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> pre, a;

ll sum(int l, int r){
    ll ret = pre[r];
    if(l > 0){
        ret -= pre[l-1];
    }
    return ret;
}

//This will calculate the cost of the increasing till j ;
ll cost(int i, int j){
    return (a[j] * (j-i)) - sum(i, j-1);
}

int main(){
    int n, k;
    cin >> n >> k;
    a.resize(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    pre.resize(n, 0);
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        pre[i] = a[i];
        if(i){
            pre[i] += pre[i-1];
        }
    }

    vector<int> ans(n);
    for(int i=0; i<n; i++){
        int lo = 0;
        int hi = i;

        while(lo < hi){
            int mid = lo + (hi - lo)/2;

            if(cost(mid, i) <= k){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
        }
        ans [i] = i - lo + 1;
    }

    int best_freq = *max_element(ans.begin(), ans.end());
    int best_ele = -1;
    for(int i=0; i<n; i++){
        if(ans[i] == best_freq){
            best_ele = a[i];
            break;
        }
    }

    cout << best_freq << " " << best_ele << endl;
    return 0;
}
