#include<bits/stdc++.h>
using namespace std;

bool sequence_check(string s){
    int opening, closing  = 0;

    for(char c:s){
        if(c== '('){
            opening ++;
        }
        else if(c == ')'){
            closing++;
        }
        else{
            return false;
        }

        if(opening < closing){
            return false;
        }
    }
    if(opening == closing ){
        return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool ans = sequence_check(s);
        if(ans == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
