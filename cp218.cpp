#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int v[n];

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int e = 0;
    int o = 0;

    for(int i=0; i<n; i++){
        if(v[i]%2 == 0){
            e++;
        }
        else{
            o++;
        }
    }

    int index = -1;
    if(e > o){
        for(int i=0; i<n; i++){
            if(v[i]% 2 == 1){
                index = i+1;
                break;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(v[i]%2 == 0){
                index = i+1;
                break;
            }
        }
    }

    cout << index << endl;
return 0;
}
