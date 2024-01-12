#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        for(int i=0; i<9; i++){
            string s;
            cin >> s;

            for(auto &c:s){
                if(c == '9'){
                    c = '8';
                }
            }
            cout << s << endl;
        }
    }
return 0;
}
