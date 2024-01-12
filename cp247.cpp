#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<long long>num;
    num[0] = 11;
    for(int i=1; i<9; i++){
        num[i] = num[i-1]*10 + 1;
    }

    while(t--){
        int n;
        cin >> n;

        auto it = upper_bound(num.begin(),num.end(), n);
        if(it != num.begin()){
            it--;
            int index = it - num.begin();
            while(n>=0){
                if(n >= num[index]){
                    n -= num[index];
                }
                else{
                    while(n < num[index]){
                        index--;
                    }
                }
            }
            if(n == 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}
