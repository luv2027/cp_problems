#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n+1, 0);

    for(int i=2; i<=n/2; i++){
            if(v[i] == 0){
                for(int j=i; j<=n ; j+=i){
                    v[j]++;
                }
            }
    }

    int c =0;
    for(int i=2; i<=n; i++){
        if(v[i] == 2){
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
