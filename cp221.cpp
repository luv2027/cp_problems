#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s1;
    cin >>s >> s1;
    int n = s.length();

    int p1 = 0;
    int n1 = 0;

    for(int i=0; i<n; i++){
            if(s[i] == '+'){
                p1++;
            }
            else if(s[i] == '-'){
                n1++;
            }
    }

    int p2 = 0;
    int n2 = 0;
    int q = 0;
    for(int i=0; i<n; i++){
        if(s1[i] == '+'){
            p2 ++;
        }
        else if(s1[i] == '-'){
            n2++;
        }
        else{
            q++;
        }
    }

    int req1 = p1 - p2;
    int req2 = n1 - n2;

    if(req1 == 0 && req2 == 0){
        cout << fixed << setprecision(12) << double(1) << endl;
        return 0;
    }

    int a = 0;
    if(req1 > req2){
        a = req1/double(q);
    }
    else{
        a = req2/double(q);
    }

    if(a > 1){
        cout << fixed<< setprecision(12) << double(0) << endl;
    }
    else{

    double ans = 1;
    while(q--){
        ans *= (0.5);
    }
    cout << fixed << setprecision(12) <<ans << endl;

    }
return 0;
}
