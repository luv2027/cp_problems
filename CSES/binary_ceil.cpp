#include<bits/stdc++.h>
using namespace std;

int binary_search1(int arr[], int target[], int n, int k, int i){
           int mod = 1000000007;
           if(target[i] < arr[0]){
            return 1;
           }
           int start =0;
           int end = n-1;
           while(start <=end ){
              int mid = start + (end-start)/2;
              if(arr[mid] == target[i]){
                  return (mid+1)%mod;
              }
              else if(arr[mid] > target[i]){
                  end = mid-1;
              }
              else{
                  start = mid+1;
              }
              }
   return (end+2)%mod;
}
int main(){
   int n, k;

   cin >> n >> k;
   int arr[n];
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }

   int target[k];
   for(int i=0; i<k; i++){
       cin >> target[i];
    }
    for(int i=0; i<k; i++){
            int ans = binary_search1(arr, target, n, k, i);
            cout << ans << endl;
    }


   return 0;
}
