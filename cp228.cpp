#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b  >> c;

    int sum = a+b+c;

    if(sum%2 == 0){
        sum/=2;

        int x = sum - c;
        int y = sum - a;
        int z = sum - b;

        if(x >=0 && y>=0 && z>=0){
            cout << x << " " << y << " " << z;
        }
        else{
            cout << "Impossible";
        }
    }
    else{
        cout << "Impossible";
    }
    return 0;
}
