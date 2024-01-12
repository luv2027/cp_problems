#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    int m = s.length();
    sort(s.begin(), s.end());

    int ans = 0;
    for(auto i=mp.begin(); i!= mp.end(); i++){
        if(i-> second % n != 0){
            ans = 1;
            break;
        }
        i-> second = (i->second)/n;
    }

    if(s[0] == s[m-1]){
        if(m == n){
            cout << s;
        }
        else{
            cout << -1 ;
        }
    }
    else if(n == 1){
        cout << s << endl;
    }
    else if(ans == 1){
        cout << -1 << endl;
    }
     else{
            string ans1 = "";
    for(auto i=mp.begin(); i!=mp.end(); i++){
        int freq = i-> second;
        int char1 = i -> first;

        for(int j=0; j<freq; j++){
            ans1 += char1;
        }
    }

    ans1 += ans1 ;
    cout << ans1 <<endl;

     }


return 0;
}
