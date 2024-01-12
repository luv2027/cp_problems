#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int l1 = s.size();
    int l2 = t.size();

    int ans = 0;

    for(int f=1; f<=min(l1, l2); f++){
        if(l1%f == 0 && l2%f == 0){

            bool bad = false;
            for(int i= f; i<l1; i++){
                if(s[i%f] != s[i]){
                    bad = true;
                    break;
                }
            }

            for(int i=f; i<l2; i++){
                if(t[i%f] != t[i]){
                    bad = true;
                    break;
                }
            }

            if(s.substr(0, f) != t.substr(0, f)){
                bad = true;
            }
            if(bad == false){
                ans++;
            }
        }
    }
    cout << ans << endl;
return 0;
}
