#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    int i=0;
    while(i<s.length()){
        if(s[i] == '.'){
            ans+= '0';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            ans += '1';
            i+=2;
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            ans += '2';
            i+=2;
        }
    }
    cout << ans << endl;
return 0;
}
