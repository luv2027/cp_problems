#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
            int n;
            cin >> n;
            string s;
            cin >> s;

            int f=0;
            int c_0 = 0;
            int c_1 = 0;

            for(int i=0; i<n; i++){
                if(i<n-1 && s[i]!=s[i+1]){
                    f = 1;
                    break;
                }
                if(s[i] == '1'){
                    c_1++;
                }
                else{
                    c_0++;
                }
            }

            if(f == 1){
                cout << "YES" << endl;
            }
            else{
                if(c_0 > c_1){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
    }
    return 0;
}
