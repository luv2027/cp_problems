#include<bits/stdc++.h>
using namespace std;

//v[i] == 1 suggests that my array is sorted at current index
//v[i] == 0 suggests that i dont know wheter it is sorted or not
//v[i] == -1 suggests that my array is not sorted at current index

int main(){
    int t;
    cin >> t;
    while(t--){
            string s;
            cin >> s;
            int n = s.length();

            int f = 0;
            vector<int>v;
            for(int i=0; i<n; i++){
                    if(s[i] == '+'){
                        if(v.size() && v.back() == -1){
                            v.push_back(-1);
                        }
                        else{
                            v.push_back(0);
                        }
                    }
                    else if(s[i] == '-'){
                        if(v.back() == 1 && v.size()){
                            v.pop_back();
                            v.back() = 1;
                        }
                        else{
                            v.pop_back();
                        }
                    }
                    else{
                            if(s[i] == '1'){
                                if(v.size() < 2){
                                    continue;
                                }
                                else if(v.back() == -1){
                                    f= 1;
                                }
                                else{
                                    v.back() = 1;
                                }
                            }
                            else if(s[i] == '0'){
                                if(v.size() < 2){
                                    f = 1;
                                }
                                else if(v.back() == 1){
                                    f = 1;
                                }
                                else{
                                    v.back() = -1;
                                }
                            }
                    }
            }
            if(f == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
    }
return 0;
}
