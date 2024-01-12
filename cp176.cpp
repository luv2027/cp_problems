#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }


    for(int i=1; i<=5000; i++){
        if(s.find(i) == s.end()){
            cout << i << endl;
            return 0;
        }
    }

return 0;
}
