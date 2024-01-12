#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a,b, c;
    cin >> n >> a >> b >> c;

    int maxi = 0;
    for(int x =0; x<=n; x++){
        for(int y=0; y<=n; y++){
            int cz = n - a*x - b*y;
            if(cz < 0 || cz%c != 0){
                continue;
            }
            int z = cz/c;
            maxi = max(maxi, x+y+z);
        }
    }
    cout << maxi << endl;
return 0;
}
