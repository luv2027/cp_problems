#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return (a.first > b.first) || (a.first== b.first && a.second < b.second);
}

int main(){
    int n , k;
    cin >> n >> k;
    k--;

    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), cmp);
    reverse(v.begin(), v.end());

    int ans = v[k].first;
    int ans1 = v[k].second;

    int c =0;
    for(int i=0; i<n; i++){
        if(v[i].first == ans && v[i].second == ans1){
            c++;
        }
    }
    cout << c << endl;
return 0;
}
