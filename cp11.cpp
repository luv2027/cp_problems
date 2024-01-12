#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;

        if(r < 2*l){
            cout << r-l << endl;
        }
        else{
            ll largest_ans;
            if(r%2 == 0){
                largest_ans = r-1;
            }
            else{
                largest_ans = r;
            }

            cout << largest_ans/2 << endl;
        }
    }
return 0;
}
