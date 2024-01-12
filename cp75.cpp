#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<int> ans(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<primes.size(); j++){
                if(v[i] % j == 0){
                    ans.push_back(j);
                    break;
                }
            }
        }

        int fre[32];
        for(int i=0; i<ans.size(); i++){
            fre[ans[i]]++;
        }

        int c=0;
        for(int i=0; i<32; i++){
            if(fre[i] > 0){
                c++;
            }
        }
        cout << c << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
return 0;
}
