#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int b[n];
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int c[n];
        for(int i=0; i<n; i++){
            c[i] = a[i] - b[i];
        }
        vector<int> ans;

        int maxi = *max_element(c, c+n);
        for(int i=0; i<n; i++){
            if(c[i] == maxi){
               ans.push_back(i+1);
            }
        }

        cout << ans.size()<< endl;

        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
return 0;
}
