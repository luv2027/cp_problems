#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> a;
            arr[i] = a;
        }
        int maximum =0;
        int minimum = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > maximum){
                maximum = arr[i];
            }
            if(arr[i] < minimum){
                minimum = arr[i];
            }
        }
        while(minimum>0 || maximum>0){
            int ans = minimum&maximum;
        }
        cout << (maximum&minimum) << endl;
    }
    return 0;
}
