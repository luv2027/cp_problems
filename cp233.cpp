#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
            string a, b;
            cin >> a >> b;
            int n = a.length();

            int f = 0;
            for(int i=1; i<n; i++){
                if(a[i] == '1' &&  b[i] == '1' && a[i-1] == '0' && b[i-1] == '0'){
                    f = 1;
                    break;
                }
            }

            if(f==0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
    }
return 0;
}
