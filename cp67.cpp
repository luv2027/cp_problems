#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> v(n);

    for(int i=0 ; i<n; i++){
        cin >> v[i];
    }

    if(n==1){
        cout << v[1] << endl;
        return 0;
    }

    sort(v.begin(), v.end());

    int ind =0;
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            ind = i;
            break;
        }
    }

    if(ind >= n/2){
        cout << v[1] << endl;
    }
    else{
        cout << v[n-1] << endl;
    }
return 0;
}
