#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
            int n;
            cin >> n;

    vector<int> v(n+1, 0);
    cout << 1 << " ";

    int mp1[n+2];
    mp1[1] = 1;

    for(int i=2; i<=n; i++){
        if(mp1[i] == 1){
            continue;
        }
        int curr_i = i;
        while(curr_i <= n){
            if(mp1[curr_i] != 1){
                cout << curr_i<< " " ;
                mp1[curr_i] = 1;
            }
            curr_i*=2;
        }
    }
    cout << endl;
    }
return 0;
}
