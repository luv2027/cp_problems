#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        vector<int>v;
        set<int> s;
        int x;
        for(int i=0; i<n; i++){
            cin>> x;

            if((x <= n)&&(!s.count(x))){
               s.insert(x);
            }
            else{
                v.push_back(x);
            }
        }

        sort(v.begin() , v.end());

        int c = v.size();
        int ind = 0;
        for(int i=1; i<=n; i++){
            if(s.count(i)){
                continue;
            }

            if(v[ind] <= 2*i){
                c = -1;
                break;
            }
            ind++;
        }

        cout << c << endl;
    }
    return 0;
}
