#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, s1, s2, d1, d2;
    cin >> t >> s1 >> s2 >> d1 >> d2;
    string dir;
    cin >> dir;

    int diff1 = d1 - s1;
    int diff2 = d2 - s2;

    int s=0, w=0, n=0, e=0;
    if(diff1 >=0 ){
        e = diff1;
    }
    else{
        w = diff1;
    }

    if(diff2 >= 0){
        n = diff2;
    }
    else{
        s = diff2;
    }

    int index =-1;
    for(int i=0; i<dir.length(); i++){
        if(e>0){
            if(dir[i] == 'E'){
                e--;
            }
        }
        if(w<0){
            if(dir[i] == 'W'){
                w++;
            }
        }
        if(n>0){
            if(dir[i] == 'N'){
                n--;
            }
        }
        if(s<0){
            if(dir[i] == 'S'){
                s++;
            }
        }
        if(e == 0 && w ==0 && s==0 && n==0){
            index = i+1;
            break;
        }
    }
    cout << index << endl;
return 0;
}
