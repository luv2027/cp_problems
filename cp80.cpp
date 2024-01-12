#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    if(b[m-1] % a[0] == 0){
        cout << 1;
    }
    else{
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(b[j] % a[i] == 0){
                    int num = b[j]/a[i];
                    if(maxi < num){
                        maxi = num ;
                    }
                }
            }
        }
        int c =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(b[j] % a[i] == 0){
                    int num = b[j]/a[i];
                    if(num == maxi){
                        c++;
                    }
                }
            }
        }
        cout << c ;
    }
    return 0;
}
