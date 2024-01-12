#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int mat[n][n];

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i == j){
                mat[i][j] = k;
            }
            else{
                mat[i][j] = 0;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}
