#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int f;
    cin >> f;
    int best = f;
    int worst = f;
    int a = 0;

    for(int i=1; i<n; i++){
        int num;
        cin >> num;

        if(num > best){
            a++;
            best = num;
        }
        if(num < worst){
            a++;
            worst = num;
        }
    }

    cout << a << endl;
    return 0;
}
