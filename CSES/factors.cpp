#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
    cin >> n;

    int count =0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            while(n%i==0){
                count++;
                n/=i;
            }

        }
    }
    cout << count << endl;
    }
   return 0;
}
