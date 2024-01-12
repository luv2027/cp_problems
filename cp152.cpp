#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0;
    int j = n-1;
    int f =0;
    while(i < j){
        if(v[i] + v[j] == x){
            f = 1;
            break;
        }
        else if(v[i] + v[j] < x){
            i++;
        }
        else{
            j--;
        }
    }

    if(f == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

return 0;
}
