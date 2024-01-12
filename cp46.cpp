#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4; i++){
        cin >> a[i];
    }

    sort(a, a+4);

    int c =0;

    if(a[0] == a[1] && a[1]== a[2] && a[2] == a[3]){
        c = 3;
        cout << c << endl;
        return 0;
    }
    else if((a[0] == a[1]&& a[1] == a[2]) || (a[1] == a[2] && a[2] == a[3])){
        c = 2;
        cout << c << endl;
        return 0;
    }
    else if(a[0] == a[1] && a[2] == a[3]){
        c = 2;
                cout << c << endl;
        return 0;
    }
    else if(a[0] == a[1] || a[1] == a[2] || a[2] == a[3] || a[3] == a[4]){
        c = 1;
                cout << c << endl;
        return 0;
    }
    else{
        c = 0;
                cout << c << endl;
        return 0;
    }
return 0;
}
