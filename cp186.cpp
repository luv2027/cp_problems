#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;

        double n = (-360)/float(a-180);

        if(n <= 0){
            cout << "NO" << endl;
        }
        else if(static_cast<int>(n)== n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}
