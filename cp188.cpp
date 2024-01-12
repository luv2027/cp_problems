#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int n = a.length();
    int m = b.length();

    if(n != m){
            int f =0;
    for(int i=0; i<n; i++){
        if(a[i] == '0'){
            f = 1;
        }
    }

    for(int i=0; i<m; i++){
        if(b[i] == '0'){
            f = 1;
        }
    }

    if(f == 1){
    int i = n-1;
    int j = m-1;
    while(i>=0 && j>=0){
        if(a[i] >='5' && b[i] >='5'){
            f= 2;
        }
        else if((a[i] == '0' && b[j] != '0') ||(a[i] != '0' && b[j] == '0')){
            f = 2;
        }
        i--;
        j--;
        if(f == 2){
            break;
        }
    }
    if(f == 2){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
    else if(f == 0){
        cout << "YES" << endl;
    }
    }
    else{
        int f =0;
        int i= 0;
        while(i<n){
            if(a[i] == '0' && b[i] == '0'){
                for(int j=i+1; j<n; j++){
                    if(a[j] >= '5' && b[j] >= '5'){
                        f = 1;
                        break;
                    }
                }
            }
            else if((a[i] == '0' && b[i] != '0') ||(a[i] != '0' && b[i] == '0')){
                f = 1;
            }
            i++;
            if(f == 1){
                break;
            }
        }

        if(f == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
return 0;
}
