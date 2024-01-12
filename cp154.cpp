#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int v[100];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=n; i>0; i/=2){
        for(int j=0; j<n; j+=i){
            if(is_sorted(v+j, v+j+i)){
                cout << i ;
                return 0;
            }
        }
    }

return 0;
}
