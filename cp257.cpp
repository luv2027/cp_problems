#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans =0;
        int i =0;
        while(i<n){
            if(s[i] == 'B'){
                ans += 1;
                i+=k;
            }
            else{
                i++;
            }
        }
        cout << ans << endl;
    }
return 0;
}
