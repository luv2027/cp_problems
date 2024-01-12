#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int arr[12];
    for(int i=0; i<12; i++){
        cin >> arr[i];
    }
    if(n== 0){
        cout << 0 << endl;
    }
    else{    sort(arr, arr+12);
    int c = 0;
    for(int i=11; i>=0; i--){
            n -= arr[i];
            c++;

        if(n <= 0){
            break;
        }
    }

    if(n > 0){
        cout << -1 << endl;
    }
    else{
        cout << c << endl;
    }

    }

return 0;
}
