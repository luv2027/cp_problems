#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
            string s;
    cin >> s;
    int n =s.size();

    if(n == 2){
        if(s[0] == '(' && s[1] == ')'){
            cout << "NO" << endl;
            continue;
        }
    }

    int f =0;
    for(int i=0; i<n-1; i++){
        if(s[i] == '(' && s[i+1] == '('){
                        f= 1;
                        break;
                     }
        if(s[i] == ')' && s[i+1] == ')'){
            f= 1;
            break;
        }
    }

    if(f== 0){
        cout << "YES" << endl;
        for(int i=0; i<n; i++){
            cout << '(';
        }
        for(int i=0; i<n; i++){
            cout << ')';
        }
        cout << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i=0; i<n; i++){
            cout << "()";
        }
        cout << endl;
    }
    }
return 0;
}
