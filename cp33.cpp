#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int ans = 0;
    for(int i=1; i<(1<<10); i++){
        string s(10, '0');
        for(int digit = 0; digit<10; digit++){
            if(i & (1 << digit)){
            s[digit] = '1';
        }
        }
        if(stoll(s) <= n){
            ans ++;
        }
    }

    cout << ans << endl;
return 0;
}
