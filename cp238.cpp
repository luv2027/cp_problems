#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, v;
    cin >> n >> v;

    int a[3050];
    memset(a, 0, sizeof(a));

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >>y;
        a[x]+=y;
    }

    long long ans = 0;
    for(int i=1; i<=3001; i++){
        if(a[i] + a[i-1] <= v){
            ans+= a[i]+a[i-1];
            a[i] = 0;
        }
        else{
            ans += v;
            if(a[i-1] >= v){
                a[i-1] = 0;
            }
            else{
                a[i] = a[i] + a[i-1] -v;
            }
        }
    }
    cout << ans << endl;
return 0;
}




