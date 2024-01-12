#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int>index(n+1);
        for(int i=0; i<n; i++){
            int a;
        cin >> a;
        index[a] = i;
        }

        int ans = 0;
        for(int i=1; i<n; i++){
            if(index[i+1] < index[i]){
                    ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
