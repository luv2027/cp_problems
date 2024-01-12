#include<bits/stdc++.h>
using namespace std;

bool isvalid(int n, int m, int i, int j){
    if(i >=0 && i<n && j>=0 && j<m){
        return true;
    }

    return false;
}

int main(){
    int n, m;
    cin >> n >> m;

    char mat[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    int c =0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            if(mat[i][j] == 'W'){
                if(isvalid(n, m, i-1, j) && mat[i-1][j] == 'P'){
                    c++;
                    mat[i-1][j] = '.';
                }
                else if(isvalid(n, m, i, j-1) && mat[i][j-1] == 'P'){
                    c++;
                    mat[i][j-1] = '.';
                }
                else if(isvalid(n, m, i, j+1) && mat[i][j+1] == 'P'){
                    c++;
                    mat[i][j+1] = '.';
                }
                else if(isvalid(n, m, i+1, j) && mat[i+1][j] == 'P'){
                    c++;
                    mat[i+1][j] = '.';
                }
            }
        }
    }

    cout << c << endl;
return 0;
}
