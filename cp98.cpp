#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >>n >> m;

    char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m ;j++){
            if(a[i][j] == '-'){
                continue;
            }
            if((i%2) == (j%2)){
                a[i][j] = 'B';
            }
            else{
                a[i][j] = 'W';
            }
        }
    }

    for(int i=0; i<n; i++){
        string ans = "";
        for(int j=0; j<m; j++){
            ans += a[i][j];
        }
        cout << ans << endl;
    }

return 0;
}
