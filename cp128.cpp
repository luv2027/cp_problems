#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        if(v[0] == v[n-1]){
            cout << -1 << endl;
        }
        else{
            vector<int> c;
            int i = n-1;
            int ele = v[n-1];
            while(i>=0){
                if(v[i] == ele){
                    c.push_back(ele);
                    v.pop_back();
                }
                else{
                    break;
                }
                i--;
            }
            cout << v.size() << " " << c.size() << endl;
            for(int i=0; i<v.size(); i++){
                cout << v[i] << " ";
            }
            cout << endl;
            for(int i=0; i<c.size(); i++){
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
return 0;
}
