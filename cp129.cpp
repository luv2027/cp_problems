#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1){
            ll num_ele;
            cin >> num_ele;
            vector<ll> v(num_ele);
            for(int i=0; i<num_ele; i++){
                cin >> v[i];
            }

            ll mini = INT_MAX;
            int index = 0;
            for(int i=0; i<num_ele; i++){
                if(mini > v[i]){
                    mini = v[i];
                    index = i;
                }
            }
            cout << mini << endl;
        }
        else{
        priority_queue<ll, vector<ll>, greater<ll> >sec_min;
        ll minest = INT_MAX;
        while(n--){
            ll num_ele;
            cin >> num_ele;
            vector<ll> v(num_ele);
            for(int i=0; i<num_ele; i++){
                cin >> v[i];
            }

            ll mini = INT_MAX;
            int index = 0;
            for(int i=0; i<num_ele; i++){
                if(mini > v[i]){
                    mini = v[i];
                    index = i;
                }
            }

            if(minest > mini){
                minest = mini;
            }

            ll seco = INT_MAX;
            for(int i=0; i<num_ele; i++){
                if(i != index){
                    seco = min(seco, v[i]);
                }
            }
            sec_min.push(seco);
        }

        sec_min.pop();
        ll sum = 0;
        while(!sec_min.empty()){
            sum += sec_min.top();
            sec_min.pop();
        }
           sum += minest;
           cout << sum << endl;

        }
    }
return 0;
}

