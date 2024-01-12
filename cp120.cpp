#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        int a, b, c;
        cin >> a >> b >> c;

        if(n == 1){
            n = a;
            a = 0;

            if(n == 2){
                n = b;
                b = 0;

                if(n == 3){
                    n = c;
                    c = 0;
                }
            }
            else if(n == 3){
                n = c;
                c = 0;

                if(n == 2){
                    n = b;
                    b = 0;
                }
            }
        }
        else if(n == 2){
             n = b;
            b= 0;

            if(n == 1){
                n = a;
                a = 0;

                if(n == 3){
                    n = c;
                    c = 0;
                }
            }
            else if(n == 3){
                n = c;
                c = 0;

                if(n == 1){
                    n = a;
                    a = 0;
                }
            }
        }
        else if(n == 3){
             n = c;
            c = 0;

            if(n == 1){
                n = a;
                a = 0;

                if(n == 2){
                    n = b;
                    b = 0;
                }
            }
            else if(n == 2){
                n = b;
                b = 0;

                if(n == 1){
                    n = a;
                    a = 0;
                }
            }
        }

        if(a== 0 && b==0 && c==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}
