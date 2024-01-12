#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    int flag =0;
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            s.erase(s.begin() + i);
            flag =1;
            break;
        }
    }

    if(flag == 0){
        s.erase(s.begin() + n-1);
    }

    cout << s << endl;
return 0;
}
