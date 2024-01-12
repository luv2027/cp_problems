#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    set<ll> square;
    for(int i=1; i*i<1e9; i++){
        square.insert(i*i);
    }

    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;

        if(n%2 == 0 && square.find(n/2) != square.end()){
            cout << "YES" << endl;
        }
        else if(n%4 == 0 && square.find(n/4) != square.end()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}
