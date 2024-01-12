#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        long long ans = 0;
        if(n%m == 0){
            ans = 0;
            cout << ans << endl;
        }
        else{
            set<int> a;
            int f = 0;
            int left = n%m;
            a.insert(left);
            while(left < m){
                ans += left;
                left*= 2;
                if(a.find(left) != a.end()){
                    f = 1;
                    break;
                }
                a.insert(left);
            }
            if(f!= 1){
                if(left%m != 0){
                left = left%m;
                while(left<m){
                        ans += left;
                        left*= 2;
                        if(a.find(left) != a.end()){
                            f = 1;
                            break;
                        }
                        a.insert(left);
                }
                if(left%m != 0){
                        if(a.find(left%m) != a.end()){
                            f = 1;
                        }
                }
            }
            }

            if(f!= 1){
                    cout << ans << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
return 0;
}
