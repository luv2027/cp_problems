#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    set<ll> active_set;
    ll sum1 = 0;
    for(int i=0; i<n; i++){
        if(a[i] + sum1 >=0 ){
            active_set.insert(a[i]);
            sum1 += a[i];
        }
        else if(active_set.size() > 0){
            ll smallest_ele = *active_set.begin();
            if(a[i] > smallest_ele){
                active_set.erase(smallest_ele);
                sum1 -= smallest_ele;

                active_set.insert(a[i]);
                sum1 +=  a[i];
            }
        }
        else{

        }
    }

    cout << active_set.size() << endl;
return 0;
}
