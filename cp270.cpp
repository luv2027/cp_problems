#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int mini = INT_MAX;
        int ind = -1;
        for(int i=0; i<n; i++){
            if(a[i] < mini){
                mini = a[i];
                ind = i;
            }
        }

        cout << n-1 << endl;
        for(int i=ind+1; i<n; i++){
            cout << ind+1 << " " << i+1 << " "<< mini << " " << a[ind] + i - ind << endl;
        }
        for(int i=ind-1; i>=0; i--){
            cout << ind+1 << " " << i+1 << " " << mini << " " << a[ind] + ind - i << endl;
        }
    }
return 0;
}
