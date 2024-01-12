#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n== 0){
        cout << 0 << " " << 0 << " " << 0 << endl;
    }
    else{
        int a =0, b=1;
        while(a+b != n){
            int x = a;
            a = b;
            b = x + b;
        }
        cout << 0 << " " << a << " " << b << endl;
    }
    return 0;
}
