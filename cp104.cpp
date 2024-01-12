#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int c =0;

    for(int i=0; i<n; i++){
            auto it = v.begin()+k;
            int ele = v[k-1];
            v.erase(it);
            v.push_back(ele);
            int sec = v[0];
            if(sec == ele){
                c = i+1;
                break;
            }
            v.erase(v.begin());
    }
    int f =0;
    for(int i=0; i<n-1 ;i++){
        if(v[i] != v[i+1]){
            f =1;
        }
    }

    if(f == 1){
        cout << -1 << endl;
    }
    else{
        cout << c << endl;
    }

return 0;
}
