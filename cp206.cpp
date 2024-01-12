#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int y;
    cin >> x;

    int a = 0;
    for(y=0; y<=100; y++){
        vector<int>v(10,-1);
        long long ans = x*x + 2*x*y + y*y + x*x*x + 3*x*x*y + 3*x*y*y + y*y*y;
        while(ans >= 0){
            int d = ans%10;
            v[d] = 1;
            ans /= 10;
        }

        int f = 0;
        for(int i=0; i<10; i++){
            if(v[i] == -1){
                f = 1;
            }
        }

        if(f == 0){
            a = y;
            break;
        }
    }

    cout << a << endl;
return 0;
}
