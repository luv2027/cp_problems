#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[1000], b[1000], c[1001] = {0};
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        c[b[i]]++;
    }

    int count1 = 0;
    for(int i=0; i<n; i++){
        c[b[i]]--;
        if(c[a[i]] == 0){
            count1++;
        }
        c[b[i]]++;
    }

    cout << count1 << endl;
return 0;
}
