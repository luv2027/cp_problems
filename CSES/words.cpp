#include<bits/stdc++.h>
using namespace std;

int main(){
   int test ;
   cin >> test;
   while(test--){
        string str;
        cin >> str;

        int n= str.length() ;
        if(n > 10){
              char first = str[0];
              char last = str[n-1];
              cout << first << n-2 << last << endl;
        }else{
             cout <<str << endl;
        }

    }
    return 0;
}
