#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >>n >> m;

    if(n==m && n<=1){
        cout << 2;
    }
    else if(n > m){
    int a = floor(sqrt(n));
    int b = n - (a*a);

    if((a + b*b) == m){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    }
    else{
            int b = floor(sqrt(m));
    int a = m - (b*b);

    if((b + a*a) == n){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    }
return 0;
}
