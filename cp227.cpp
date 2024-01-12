#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;

    vector<int>v(n+1);
    vector<int>a(n+1, 0);

    for(int i=0; i<n; i++){
        cin >> v[i];
        a[v[i]]++;
    }

    for(int i=0; i<=n; i++){
        if(a[i] == 0){
            v[n] = i;
        }
    }

    int index = (-k)%(n+1);
    if(index < 0){
        index += n+1;
    }

    for(int i=0; i<n; i++){
        cout << v[index] << " ";
        index++;
        index %= (n+1);
    }
    cout << endl;
    }
return 0;
}
