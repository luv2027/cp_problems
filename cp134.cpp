#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int c =0;

    while(n > 9){
        n+=1;
        c++;
        while(n%10 == 0){
            n/=10;
        }
    }

    c+= 9;
    cout << c << endl;
return 0;
    }



