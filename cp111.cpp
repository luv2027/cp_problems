#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);


    int f1[27];
    int f2[27];
    int f3[27];
    int f4[27];

    for(int i=0; i<27; i++){
        f1[i] = 0;
        f2[i] =0;
        f3[i] =0;
        f4[i] = 0;
    }

    int n = s1.size();
    for(int i=0; i<n; i++){
        if(s1[i] >='a' && s1[i]<='z'){
            f1[s1[i] - 'a']++;
        }
        else if(s1[i] >='A' && s1[i]<='Z'){
            f2[s1[i] - 'A']++;
        }
    }

    int n1 = s2.size();
    for(int i=0; i<n1; i++){
        if(s2[i] >='a' && s2[i]<='z'){
            f3[s2[i] - 'a']++;
        }
        else if(s2[i] >='A' && s2[i]<='Z'){
            f4[s2[i] - 'A']++;
        }
    }

    for(int i=0; i<27; i++){
        f3[i] = f3[i] - f1[i];
        f4[i] = f4[i] - f2[i];
    }

    int flag =0;
    for(int i=0; i<27; i++){
            if(f3[i] > 0 || f4[i] > 0){
                flag = 1;
                break;
            }
    }

    if(flag == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
return 0;
}
