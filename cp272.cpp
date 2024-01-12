#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;

        int c = 0;
        while(n<m){
            s1+= s1;
            n+=n;
            c++;
        }

        if(s1.find(s2) != string::npos){
            cout << c << endl;
        }
        else{
                s1+= s1;
                c++;
                if(s1.find(s2) != string::npos){
                    cout << c << endl;
                }
                else{
                    s1+=s1;
                    c++;
                    if(s1.find(s2) != string::npos){
                    cout << c << endl;
                    }
                    else{
                        cout << -1 << endl;
                    }
                }
        }
    }
return 0;
}
