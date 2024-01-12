#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector< pair <int, int> >v;

    int num = n;
    while(num--){
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
    }

    sort(v.begin(), v.end());
    int f = 0;
    for(int i=0; i<n-1; i++){
           if(v[i].second > v[i+1].second){
            f= 1;
            cout << "Happy Alex" << endl;
            break;
        }
            if(f== 1){
                break;
            }
    }

    if(f== 0){
        cout <<"Poor Alex" << endl;
    }
return 0;
}
