#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b, c1;
    int count1 =0;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            c1 = i*i + j*j;
            int c = sqrt(c1);
            if(c <= n && c*c == c1){
                count1++;
            }
        }
    }
    cout << count1 << endl;
return 0;
}
