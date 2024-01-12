#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ll e = *min_element(v.begin(), v.end());
    int c = 0;
    int in=0;

    for(int i=0; i<n; i++){
        if(v[i] == e){
            c++;
            in = i;
        }
        if(c > 1){
            break;
        }
    }

    if(c > 1){
        cout << "Still Rozdil" << endl;
        return 0;
    }
    cout << in+1 << endl;
return 0;
}
