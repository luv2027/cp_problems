#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long ans = 0;

    if(a > b+1){
        a = b+1;
    }
    else if(a+1 < b){
        b = a+1;
    }

    ans = a+b + 2*c;
    cout << ans << endl;
return 0;
}
