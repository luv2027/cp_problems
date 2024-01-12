#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9+7;

vector<vector<ll>> A = {
    {0, 1},
    {3, 2}
}

vector<vector<ll>>identity1 = {
    {1, 0},
    {0, 1}
}

vector<vector<ll> multiply(vector<vector<ll> > A, vector<vector<ll> > B){
    vector<vector<ll> ret(2, vector<ll> (2, 0));
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++{
        for(int k=0; k<2; k++){
            ret[i][k] += A[i][j] * B[j][k];
            ret[i][k] %= mod;
        }
    }
}
return ret;
}


int main(){
    int n;
    cin >> n;
    vector<vector<ll>> current = identity1;
    while(n--){
        current = multiply(current, A);
    }
    cout << current[0][0] << endl;
    return 0;
}
