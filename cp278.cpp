#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
            int n;
            cin >> n;

            int size1=  2*n;
            int a[size1];
            for(int i=0; i<size1; i++){
                cin >> a[i];
            }

            sort(a, a+size1);

            int i = 0;
            int j = size1-1;

            vector<pair<int, int>> v;
            while(i<j){
                v.push_back(make_pair(a[i], a[j]));
                i++;
                j--;
            }

            int ans =0;

            for(int i=0; i<v.size()-1; i++){
                ans += abs(v[i].first - v[i+1].first);
                ans += abs(v[i].second - v[i+1].second);
            }

            cout << ans << endl;
            for(int i=0; i<v.size(); i++){
                cout << v[i].first << " " << v[i].second << endl;
            }
    }
return 0;
}
