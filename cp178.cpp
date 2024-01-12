#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int o = 0;
    for(int i=0; i<n; i++){
        if(v[i]%2 == 1){
            o++;
        }
    }

    int e  = n-o;
    if(n== 1){
        cout << 1 << endl;
    }
    else if(o == 1){
        cout << 1 << endl;
    }
    else if(o%2 == 0){
        cout << e << endl;
    }
    else{
        cout << o << endl;
    }
    return 0;
}
