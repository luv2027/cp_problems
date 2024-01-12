#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<string> ans;
    int t1 = t;
    while(t--){
        int one, two, req;
        cin >> one >> two >> req;

        int buns_req = req+1;
        int pats_req = req;

        int buns_pres = one*2 + (two*2);
        int pats_pres = one + (two*2);


        if(buns_pres>= buns_req && pats_pres>=pats_req){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }

    for(int i=0; i<t1; i++){
        cout << "Case " << "#" << i+1 << ": " << ans[i]<< endl;
    }

return 0;
}
