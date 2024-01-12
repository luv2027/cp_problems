#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >>k;

    int a[30];
    bool b[901] = {false};


    for(int i=0; i<k; ++i){
        cin >> a[i];
        b[a[i]] = true;
    }

    int d = 0;
    for(int i=0; i<k; ++i){
        cout << a[i];
        for(int j=1; j<n; ++j){
            ++d;
            while(b[d]){
                ++d;
            }
            cout << " " << d;
        }
        cout << endl;
    }

return 0;
}
