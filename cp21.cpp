#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    int t;
    string s;
    cin >> n >> t;
    cin >> s;

    while(t--){
        int i=0;
        while(i<s.length()-1){
                if(s[i] == 'B'  && s[i+1] == 'G'){
                    s[i] = 'G';
                    s[i+1] = 'B';
                    i += 2;
                }
                else{
                    i++;
                }
            }
    }
    cout << s << endl;
return 0;
}
