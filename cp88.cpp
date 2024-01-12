#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int digits = s.length();
    int z = digits-1;
    string edge = "1";
    for(int i=0; i<z; i++){
        edge+= '0';
    }

    if(edge < s){
        cout << ceil(digits/2.0)<< endl;
    }
    else
    {
             cout << digits/2 << endl;
    }
    return 0;
}
