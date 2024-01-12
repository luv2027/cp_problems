#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int c = 1;
    int maxi_c = INT_MIN;
    for(int i=0; i<n; i++){
        if(i+1 < n && a[i] <= a[i+1]){
            c++;
        }
        else{
            maxi_c = max(c, maxi_c);
            c = 1;
        }
    }

    maxi_c = max(c, maxi_c);
    cout << maxi_c << endl;
return 0;
}
