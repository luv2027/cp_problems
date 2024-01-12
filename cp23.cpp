#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int y;
    cin >> y ;
    y = y+1;
    while(true){
        int f = y/1000;
        int s = (y/100)%10;
        int t = (y/10)%10;
        int l = y%10;
        if(f!=s && f!=t && f!=l && s!=t && s!=l && t!=l){
            break;
        }
        y+= 1;
    }
    cout << y << endl;
return 0;
}
