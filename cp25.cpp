#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int mat[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> mat[i][j];
        }
    }
    string ans = "";
    int f = mat[0][0] + mat[0][1] + mat[1][0];
    if(f%2 == 0){
        ans+= '1';
    }
    else{
        ans += '0';
    }

        int se = mat[0][0] + mat[0][1] + mat[0][2] + mat[1][1];
    if(se%2 == 0){
        ans+= '1';
    }
    else{
        ans += '0';
    }

        int t = mat[0][1] + mat[0][2] + mat[1][2];
    if(t%2 == 0){
        ans+= '1';
    }
    else{
        ans += '0';
    }

    cout << ans << endl;
    string ans1 = "";
        int fo = mat[0][0] + mat[1][1] + mat[1][0] + mat[2][0];
    if(fo%2 == 0){
        ans1+= '1';
    }
    else{
        ans1 += '0';
    }

        int fi = mat[0][1] + mat[1][0] + mat[1][1] + mat[1][2] + mat[2][1];
    if(fi%2 == 0){
        ans1+= '1';
    }
    else{
        ans1 += '0';
    }

        int si = mat[0][2] + mat[1][1] + mat[1][2] + mat[2][2];
    if(si%2 == 0){
        ans1+= '1';
    }
    else{
        ans1 += '0';
    }
    cout << ans1 << endl;

    string ans2 = "";
        int sev = mat[2][0] + mat[1][0] + mat[2][1];
    if(sev%2 == 0){
        ans2+= '1';
    }
    else{
        ans2 += '0';
    }

        int e = mat[2][0] + mat[2][1] + mat[1][1] + mat[2][2];
    if(e%2 == 0){
        ans2 += '1';
    }
    else{
        ans2 += '0';
    }

        int n = mat[2][2] + mat[1][2] + mat[2][1];
    if(n%2 == 0){
        ans2+= '1';
    }
    else{
        ans2 += '0';
    }
    cout << ans2 << endl;
}
