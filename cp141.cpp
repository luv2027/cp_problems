#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int c1 =0, c2=0;
    for(int i=0; i<n; i++){
        if(a[i] > b[i]){
            c1++;
        }
        else if(a[i] < b[i]){
            c2++;
        }
    }


    if(c1 == 0 && c2 == 0){
        cout << -1 << endl;
    }
    else if(c1 > c2){
        cout << 1 << endl;
    }
    else if(c1 == 0){
        cout << -1 << endl;
    }
    else{
        int num = c2 + 1;
        num = ceil(num/ float(c1));
        cout << num << endl;
    }

return 0;
}
