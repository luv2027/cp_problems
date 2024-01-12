#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> ans;
        char c;
        int n;
        cin >> c;
        int p;
        int f = 0;
        if(c == '+'){
            cin >> n;
            ans.push_back(n);
            f= 1;
            p = n;
        }
        else if(c == '-'){
            cin >> n;
            while(n--){
                ans.pop_back();
            }
            f=2;
            p = n;
        }
        else if(c == '?'){
            set<int>a;
            for(int i=0; i<ans.size(); i++){
                a.insert(ans[i]);
            }
            cout << a.size() << endl;
        }
        else{
            if(f== 1){
                ans.push_back(p);
            }
            else if(f==2){
                while(p--){
                ans.pop_back();
            }
            }
        }
    }
return 0;
}
