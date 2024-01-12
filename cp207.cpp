#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int num = n;
    for(int i=0; i<k; i++){
        cout << num << " ";
        num -= 1;
    }

    n = n- k;
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
