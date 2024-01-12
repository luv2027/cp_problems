#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0; i<n;i++){
        int a;
        cin >> a;
        sum += a;
    }

    int real_n = n+1;
    int c =0;
    for(int i=1; i<=5; i++){
        if((sum+i)%real_n != 1){
            c++;
        }
    }
    cout << c << endl;
return 0;
}
