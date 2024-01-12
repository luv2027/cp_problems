#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int f =0;
    int mini = INT_MAX;
    int l = 1;
    int r = 1;

    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1]){
            l = i;
            f = 1;
            int j = i+1;
            while(j<n){
                if(v[j] < mini){
                  r = j;
                  mini = v[j];
                }
                j++;
            }
        }
        if(f== 1){
            break;
        }

    }
    r+=1;

    if(f == 0){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else{
        reverse(v.begin()+l, v.begin()+r);
        int f1 = 0;
        for(int i=0; i<n-1; i++){
            if(v[i] > v[i+1]){
                f1 = 1;
                break;
            }
        }

        if(f1 == 0){
            cout << "yes" << endl;
            l++;
            cout << l << " " << r << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

return 0;
}
