#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a[4];
    for(int i=0; i<4; i++){
        cin >> a[i];
    }

    int n_dragons;
    cin >> n_dragons;

    int factor[n_dragons+1];
    for(int i=0; i<=n_dragons; i++){
        factor[i] = -1;
    }

    for(int i=0; i<4; i++){
        for(int j=1; j<=n_dragons; j++){
            if(factor[j] == -1){
        if(j % a[i] == 0){
            factor[j] = 1;
        }
            }
        }
    }

    int c = 0;
    for(int i=1; i<=n_dragons; i++){
        if(factor[i] == 1){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}


