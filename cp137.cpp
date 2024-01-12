#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string ans ="";
        if(n%2 == 0){
            int number_times = n/2;
            while(number_times--){
                ans += '1';
            }
        }
        else{
            ans += '7';
            int number_times = n - 3;
            number_times = n/2 -1 ;
            while(number_times--){
                ans += "1";
            }
        }

        cout << ans << endl;
    }
    return 0;
}
