#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int f[8];
    for(int i=0; i<8; i++){
        f[i] = 0;
    }

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        f[a[i]]++;
    }

    int flag = 0;
    int five = f[5];
    int seven = f[7];
    if(five >0 || seven > 0){
       flag = 1;
    }
    for(int i=1; i<8;i++){
            if(f[i] > n/3){
                flag = 1;
                break;
            }
        }

    int one = f[1];

        int two = f[2];
        int three = f[3];
        int four = f[4];
        int six = f[6];
        if(two < four){
            flag =1;
        }
        if(one != n/3){
            flag =1 ;
        }
        if(one == two == three){
        flag =1 ;
    }


        if(flag == 1){
            cout << -1 << endl;
        }
        else{
            for(int i=0; i<four; i++){
            cout << 1 << " " << 2 << " " << 4 << endl;
        }
        one -= four;
        two -= four;

        for(int i=0; i<two; i++){
            cout << 1 << " " << 2 << " " << 6 << endl;
        }

        for(int i=0; i<three; i++){
            cout << 1 << " " << 3 << " " << 6 << endl;
        }

        }
return 0;
}
