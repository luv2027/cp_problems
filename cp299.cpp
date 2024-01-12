#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        if(s[n-1] != s[n-2]){
            cout << "NO" << endl;
        }
        else{
            int f = 0;
            char mx = s[0];
            for(int i=1; i<n; i++){
                if(s[i] >= mx){
                    mx = s[i];
                }
                else{
                    f = 1;
                    break;
                }
            }
            if(f){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
