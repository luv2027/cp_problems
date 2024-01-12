#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int c25 = 0, c50=0, c100 = 0;

    int f =0;
    for(int i=0; i<n; i++){
        if(v[i] == 25){
            c25++;
        }
        else if(v[i] == 50){
            c25--;
            if(c25 < 0){
                f= 1;
                break;
            }
            c50++;

        }
        else{
            if(c50>=1 && c25>=1){
                c50--;
                c25--;
            }
            else{
                c25-=3;
            }
            if(c25 < 0  || c50 < 0){
                f= 1;
                break;
            }
            c100++;
        }
    }
    if(f == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

return 0;
}
