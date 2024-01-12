#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        int n, a, q;
        cin >> n >> a >> q;

        string s;
        cin >> s;

        int p= 0;
        int ne = 0;
        for(int i=0; i<q; i++){
            if(s[i] == '+'){
                p++;
            }
            else{
                ne++;
            }
            }

        if(a+ p < n){
            cout << "NO" << endl;
        }
        else{

            int f = 0;
            for(auto i:s){
            if(a == n){
                cout << "YES" << endl;
                f = 1;
                break;
            }

            if(i == '+'){
                    a++;
               }
            else{
                a--;
            }
        }
        if(f != 1){
        if(a == n){
        cout << "YES" << endl;
    }
    else{
        cout << "MAYBE" << endl;
    }
        }


        }


    }
	return 0;
}
