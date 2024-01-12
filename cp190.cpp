#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int p=0, ne=0;
    for(int i=0; i<n; i++){
        if(v[i] > 0){
            p++;
        }
        else if(v[i] < 0){
            ne++;
        }
    }


    sort(v.begin(), v.end());

    cout << 1 << " " << v[0] << endl;
    v.erase(v.begin());

    if(p==0){
        cout << 2 << " " << v[0] << " " << v[1] << endl;
        v.erase(v.begin());
        v.erase(v.begin());
    }
    else{
        for(auto it= v.begin(); it!=v.end(); it++){
            if(*it > 0){
                cout << 1 << " " << *it << endl;
                v.erase(it);
                break;
            }
        }
    }

    cout << v.size() << " ";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
return 0;
}
