#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    char mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    int rc = 0;
    for(int i=0; i<n; i++){
        int f =0;
        for(int j=0; j<m; j++){
            if(mat[i][j] == 'S'){
                f =1;
            }
        }
        if(f == 0){
            rc++;
        }
    }
    int o = rc;
    rc = rc*m;

    int cc = 0;
    int f =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[j][i] == 'S'){
                f++;
                break;
            }
        }
    }
    cc = m-f;
    int p = cc;
    cc = cc*n;

    cout << rc+ cc- o*p << endl;
return 0;
}
