#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c = 0;
    int len = s.length();

    for(int i=0; i<len; i++){
        if(s[i] == 'a'){
            c++;
            continue;
        }

        if(s[i] != 'a' && s[i+1] == 'a'){
            s[i]--;
            break;
        }
        else{
            s[i]--;
        }
    }

    if(c == len){
        s[len-1] = 'z';
    }
    cout << s << endl;
    return 0;

}
