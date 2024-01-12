#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int max_p_n = n/11;

    string s;
    cin >> s;

    int c =0;
    for(int i=0; i<n; i++){
        if(s[i] == '8'){
            c++;
        }
    }

    if(c >= max_p_n){
        cout << max_p_n << endl;
    }
    else{
        cout << c << endl;
    }

return 0;
}
