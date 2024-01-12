#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int freq[5] = {0};

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        freq[arr[i]] = freq[arr[i]] + 1;
    }

    int count1 =0;
    count1 += freq[4];
    int num3 = freq[3];
    int num1 = freq[1];
    if(num3 >= num1){
        count1 += freq[3];
        int sum2 = 2*freq[2];
        count1 += ceil(sum2/4.0);
    }
    else if(num3 < num1){
        count1 += freq[3];
        freq[1] -= freq[3];
        int f1 = freq[1];
        if(f1%2 == 0){
            int a = f1/2;
            freq[2] += a;
            int sum2 = 2*freq[2];
            count1 += ceil(sum2/4.0);
        }
        else{
            int sum2 = 2*freq[2] + freq[1];
            count1 += ceil(sum2/4.0);
        }
    }
    cout << count1 << endl;
}

