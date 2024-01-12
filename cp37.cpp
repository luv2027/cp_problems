#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int o =0, o1 = 0;
    for(int i=0; i<n; i++){
        int c, c1;
        cin >> c >> c1;
        if(c== 1){
            o ++;
        }
        if(c1 == 1){
            o1 ++;
        }
    }

    int z = n-o;
    int z1 = n-o1;

    int mini = min(z, o);
    int mini1 = min(z1, o1);

    cout << mini + mini1 << endl;
    return 0;
}
