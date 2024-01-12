
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;

        string a = "codechef";

        for(int i=0; i<8; i++){
            if(s[i] == a[i]){
            for(int j=0; j<8; j++){
             if(s[i] != a[j] && s[j] != a[i]){
                 swap(s[i], s[j]);
                 break;
             }
            }
        }
        }

        int f = 0;
        for(int i=0; i<8; i++){
            if(s[i] == a[i]){
                f= 1;
                break;
            }
        }

        if(f == 0){
            cout << s << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
	// your code goes here
	return 0;
}
