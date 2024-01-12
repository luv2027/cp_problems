#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[5][5];
    int i1 = 0;
    int j1 = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                i1 = i;
                j1 = j;
            }
        }
    }

    int ans = abs(2- i1) + abs(2- j1);
    cout << ans << endl;
    return 0;
}
