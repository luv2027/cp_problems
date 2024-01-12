#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    int c =0;
    for(int i=0; i<n; i++){
        int num ;
        cin >> num;
        if(num == 5){
            c++;
        }
    }

    if(c == n){
        cout << -1;
    }
    else if(c < 9 && c != n){
        cout << 0;
    }
    else{
        int div = c/9;
        int total_times_we_have_to_go = div*9;
        int z = n - c;
        for(int i=0; i<total_times_we_have_to_go; i++){
            cout << 5 ;
        }
        for(int i=0; i<z; i++){
            cout << 0 ;
        }
    }
return 0;
}
