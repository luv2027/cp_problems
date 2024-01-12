#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int f = 0;
    int c = 0;
    for(int i=0; i<n; i++){
        if(v[i] == i){
            c++;
        }
        else{
            if(f == 0){
                if(v[v[i]] == i){
                    c+= 2;
                    f = 1;
                }
            }
        }
    }

    if(f == 0 && c != n){
        c++;
    }

    cout << c << endl;
return 0;
}
