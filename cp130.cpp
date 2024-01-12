
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int a = pow(n,3)/2;
    int b = (n-1)*n*(2*n-1)/6;
    int ans = a+b;
    cout << ans;

}
return 0;
}
