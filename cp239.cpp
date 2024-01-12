#include<bits/stdc++.h>
using namespace std;


vector<long long> num;

void solve(long long n, long long  four, long long seven){
    if(n>=1e10){
        return ;
    }

    if(four == seven){
        num.push_back(n);
    }

    solve(n*10+4, four+1, seven);
    solve(n*10+7, four, seven+1);
}


int main(){
    solve(4, 1, 0);
    solve(7, 0, 1);

    sort(num.begin(), num.end());
    long long n;
    cin >> n;

    cout << num[lower_bound(num.begin(), num.end(), n) - num.begin()] << endl;
}
