#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n>21 || n<=10){
        cout << 0 << endl;
    }
    else{
        int num = n-10;

        if(num>=1 && num<=9){
            cout << 4 << endl;
        }
        else if(num == 11){
            cout << 4 << endl;
        }
        else{
            cout << 15 << endl;
        }
    }
return 0;
}
