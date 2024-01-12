#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
            string s;
            cin >> s;

            int a, b;
            for(int i=0; i<9; i++){
                if(s[i] == '7'){
                    a = i;
                }
                if(s[i] == '1'){
                    b = i;
                }
            }
            if(a < b){
                cout << 71 << endl;
            }
            else{
                cout << 17 << endl;
            }
    }
return 0;
}
