#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int i = 1;
    while(true){
        if(i > n){
            i = 1;
        }
        if(i > m){
            break;
        }
        if(i <= m){
            m-=i;
        }
        i++;
    }

    cout << m << endl;
return 0;
}
