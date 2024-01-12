#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    string s;
    cin >> s;

    int f =0;
    for(char c = 'z'; c>='a'; c--){
        for(int i=0; i<n; i++){
            if(s[i] == c){
                s.erase(s.begin() + i);
                f = 1;
                break;
            }
        }
        if(f == 1){
            break;
        }
    }
    cout << s << endl;
return 0;
}
