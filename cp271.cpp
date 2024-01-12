#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> p_2;
    for(int j=0; j<=60; j++){
            p_2.push_back(to_string(1<<j));
    }
    while(t--){
        string n;
        cin >> n;

        int mini = INT_MAX;
        for(int i=0; i<=60; i++){
            string k = p_2[i];
            int m = k.size();

            int l=0;
            int j=0;
            int c = 0;
            while(l<n.size() && j<m){
                if(n[l] != k[j]){
                    j++;
                    c++;
                }
                else{
                    l++;
                    j++;
                }
            }
            c += (n.size() - i);
            c += m-j;
            if( c < mini){
                mini = c;
            }
        }
        cout << mini << endl;
    }
return 0;
}
