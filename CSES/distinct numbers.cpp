#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a;
    cin >> n;

    set<int> s;
    for(int i=0; i<n; i++){
        cin >> a;
        s.insert(a);
    }

    long long count =0;
    for(auto x:s){
         count++;
    }
    cout << count;
}
