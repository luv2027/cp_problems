#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll m[5][5];
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cin >> m[i][j];
        }
    }

    ll maxi1 = INT_MIN;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] > maxi1){
                maxi1 = m[i][j] + m[j][i];
            }
        }
    }

    ll max1 = 2*maxi1;

    int fl =0;
        for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] == maxi1){
                m[i][j] = 0;
                m[j][i] = 0;
                fl = 1;
                break;
            }
        }
        if(fl == 1){
            break;
        }
    }

    ll maxi2 = INT_MIN;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] > maxi2){
                maxi2 = m[i][j] + m[j][i];
            }
        }
    }

    ll max2 = 2*maxi2;
    int f2 =0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] == maxi2){
                m[i][j] = 0;
                m[j][i] = 0;
                f2 = 1;
                break;
            }
        }
        if(f2 == 1){
            break;
        }
    }

    ll max3 = INT_MIN;
        for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] > max3){
                max3 = m[i][j] + m[j][i];
            }
        }
    }

    int f3 =0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] == max3){
                m[i][j] = 0;
                m[j][i] = 0;
                f3 = 1;
                break;
            }
        }
        if(f3 == 1){
            break;
        }
    }

    ll max4 = INT_MIN;
        for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] > max4){
                max4 = m[i][j] + m[j][i];
            }
        }
    }

        int f4 =0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                continue;
            }
            if(m[i][j] + m[j][i] == max4){
                m[i][j] = 0;
                m[j][i] = 0;
                f4 = 1;
                break;
            }
        }
        if(f4 == 1){
            break;
        }
    }

    ll ans = max1 + max2 + max3+ max4;
    cout << ans << endl;
return 0;
}
