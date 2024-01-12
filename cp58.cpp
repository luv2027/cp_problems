#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int v[8];
    for(int i=0; i<7; i++){
        cin >> v[i];
    }
    int index =0;
    int t  = v[index];

    while(t < n){
        index++;
        index%=7;
        t += v[index];
    }
    cout << index+1 << endl;
return 0;
}
