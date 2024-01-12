#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);

        int fir = a[0];
        int sec = a[1];
        int thi = a[2];

        int c = 0;

        while(thi != fir){
            thi -= fir;
            c++;
            if(c>3){
                break;
            }
        }

        while(sec != fir){
            sec -= fir;
            c++;
            if(c>3){
                break;
            }
        }

        if(c <= 3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}
