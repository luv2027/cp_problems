#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int c = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;

        if(a + k <= 5){
            c++;
        }
    }
    cout << c/3 << endl;
return 0;
}
