#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s){
    int sum = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            sum ++;
           }
           else{
            sum --;
           }
           if(sum < 0){
            return false;
           }
    }
    return sum==0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int o = 0, c = 0;
        for(auto i:s){
            if(i == '?'){
                continue;
            }
            else if(i == '('){
                        o++;
                    }
            else{
                c++;
            }
        }
        int n = s.size();
        int o_r = n/2 - o;
        int c_r = n/2 - c;

        if(o_r == 0 || c_r == 0){
            cout << "YES" << endl;
        }
        else{
            bool taken = false;
            for(int i=0; i<n; i++){
                if(s[i] != '?'){
                    continue;
                }
                else{
                    if(o_r == 1 && taken == false){
                        s[i] = ')';
                        c_r --;
                        taken = true;
                    }
                    else{
                        if(o_r > 0){
                            s[i] = '(';
                            o_r --;
                        }
                        else{
                            s[i] = ')';
                            c_r --;
                        }
                    }
                }
            }
                    if(isvalid(s) == true){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        }
     }
return 0;
}
