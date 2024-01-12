#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    int c =0;
    while(t--){
        int a, b, c1;
    cin >> a >> b >> c1;
    if(a+b+ c1 >= 2){
        c++;
    }
    }
    cout << c << endl;
return 0;
}
