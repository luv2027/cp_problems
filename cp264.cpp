#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd_find(int a, int b)
{
    return b == 0 ? a : gcd_find(b, a % b);
}

int main(){
    int t;
    cin >> t;

    while(t--){
            int n, m;

            cin >> n >> m;
            long long cd = gcd_find(n, m);

            long long team_2 = m/cd;
            if((team_2&(team_2-1)) > 0){
                cout << -1 << endl;

            }
            else{
                long long left = 0;
                n = n%m;
                while(n > 0){
                    left = left+ n;
                    n <<= 1;
                    if(n >= m){
                        n= n - m;
                    }
                }

            cout << left << endl;
            }
    }
return 0;
}
