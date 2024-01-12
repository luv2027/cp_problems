#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    vector<double> ans;
    int t1 = t;
    while(t--){
        ll n;
        cin >> n;

        double a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);
        if(n != 5){
            ll fir = (a[0]+a[1])/float(2.0);
            ll sec = (a[n-1] + a[n-2])/float(2.0);
            ans.push_back(sec-fir);
        }
        else{
            double fir = (a[0]+a[1]+a[2])/float(3.0);
            double sec = (a[n-1]+a[n-2]+a[n-3])/float(3.0);
            int b = abs(fir-a[0]) + abs(fir-a[1]) + abs(fir-a[2]);
            int c = abs(fir-a[n-1]) + abs(fir-a[n-2]) + abs(fir-a[n-3]);
            if(b < c){
                double s = (a[n-1] + a[n-2])/float(2.0);
                ans.push_back(s-fir);
            }
            else{
                double f = (a[0]+a[1])/float(2.0);
                ans.push_back(sec-f);
            }
        }
    }

    for(int i=0; i<t1; i++){
        cout << "Case " << "#" << i+1 << ": " << ans[i]<< endl;
    }

return 0;
}
