#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
            int n;
            cin >> n;

            int a[n];
            for(int i=0; i<n; i++){
                cin >> a[i];
            }

            string s;
            cin >> s;

            vector<int> b;
            vector<int>r;

            for(int i=0; i<n; i++){
                if(s[i] == 'B'){
                    b.push_back(a[i]);
                }
                else{
                    r.push_back(a[i]);
                }
            }

            sort(b.begin(), b.end());
            sort(r.begin(), r.end());

            int idx = 1;
            int f = 0;
            for(int i=0; i<b.size(); i++){
                if(b[i] >= idx){
                    idx++;
                }
                else{
                    f=1;
                }
            }

            for(int i=0; i<r.size(); i++){
                if(r[i] <= idx){
                    idx++;
                }
                else{
                    f=1;
                }
            }

            if(f == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
    }
return 0;
}
