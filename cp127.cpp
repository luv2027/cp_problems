#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >>m;
    char a[n+m+2];

    if(n >= m){
        for(int i=1; i<=n+m+1; i+=2){
            a[i] = 'G';
            m--;
            if(m == 0){
                break;
            }
        }
        for(int i=0; i<=n+m+1; i++){
            if(a[i] != 'G'){
                a[i] = 'B';
            }
        }
    }
    else{
        for(int i=1; i<=n+m+1; i+=2){
            a[i] = 'B';
            n--;
            if(n== 0){
                break;
            }
        }
        for(int i=0; i<=n+m+1; i++){
            if(a[i] != 'B'){
                a[i] = 'G';
            }
        }
    }
    string ans = "";
    for(int i=0;i<=n+m+1; i++){
        ans += a[i];
    }
    cout << ans << endl;
return 0;
}
