#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int h0, m0;
    cin >> h0 >> m0;
    int max_c =1;
    int  c =1;
    n--;

    while(n--){
            int h, m;
            cin >> h >> m;
            if(h== h0 && m== m0){
                c++;
                if(c > max_c){
                    max_c = c;
                }
            }
            else{
                max_c = max(max_c, c);
                c= 1;
            }
        h0 = h;
        m0 = m;
    }

    cout << max_c << endl;
return 0;
}
