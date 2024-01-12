#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
   if(n==0){
      return 0;
   }
   else if(n==1){
        return 1;
   }
   return fibo(n-1) + fibo(n-2);
}

int main(){
   int mod = 1000000007;
   int n;
   cin >> n;
   int ans = (fibo(n)%mod);
   cout << ans;
}
