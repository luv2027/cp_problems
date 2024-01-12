#include<bits/stdc++.h>
using namespace std;

bool ispossible(vector<int>&a, int index, int operations_remaining, int try_value){
    if(index == a.size()){
        return false;
    }

    if(a[index] >= try_value){
        return true;
    }

    int opsrequiredforCurrentIdx = try_value - a[index];
    if(opsrequiredforCurrentIdx  > operations_remaining){
        return false;
    }
    else{
        return ispossible(a, index+1, operations_remaining - opsrequiredforCurrentIdx, try_value-1);
    }
}

int binary(vector<int>&a, int index, int operations_remaining){
    if(index+1 == a.size()){
        return a[index];
    }

    int min_value = a[index];
    int max_value = a[index] + operations_remaining;
    while(min_value < max_value){
        int try_value = (min_value + max_value)/2 + 1;

        if(ispossible(a, index, operations_remaining, try_value) == true){
            min_value = try_value;
        }
        else{
            max_value = try_value -1;
        }
    }
    return min_value;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector< int > a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int maxi = 0;
        for(int i=0; i<n; i++){
            int num = binary(a, i, k);
            maxi = max(num, maxi);
        }
        cout << maxi << endl;
    }
    return 0;
}
