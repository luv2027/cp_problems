#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s.substr(0,n);
    string s2 = s.substr(n,n);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int flag = 0;
    if(s1 > s2){
    for(int i=0; i<n; i++){
            if(s1[i] <= s2[i]){
                flag = 1;
                break;
            }
    }
    }
    else{
            for(int i=0; i<n; i++){
            if(s1[i] >= s2[i]){
                flag = 1;
                break;
            }
    }
    }

    if(flag == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
return 0;
}
