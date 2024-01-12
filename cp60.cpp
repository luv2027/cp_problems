#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n ; i++){
        cin >> a[i];
    }
    
    int mini = INT_MAX;
    int i1, i2;
    for(int i=0; i<n-1; i++){
        if(abs(a[i] - a[i+1]) < mini){
            i1 = i;
            i2 = i+1;
            mini = abs(a[i] - a[i+1]);
        }
    }

    if(abs(a[n-1] - a[0]) < mini){
        i1 = n-1;
        i2 = 0;
    }

    cout << i1+1 << " " << i2+1 << endl;

return 0;
}
