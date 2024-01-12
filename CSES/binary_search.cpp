#include<bits/stdc++.h>
using namespace std;

string binary_search1(int arr[], int target[], int n, int k, int i){
           int start =0;
           int end = n-1;
           while(start <=end ){
              int mid = start + (end-start)/2;
              if(arr[mid] == target[i]){
                  return "YES";
              }
              else if(arr[mid] > target[i]){
                  end = mid-1;
              }
              else{
                  start = mid+1;
              }
              }
   return "NO";
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
            string ans = binary_search1(arr, target, n, k, i);
            cout << ans << endl;
    }


   return 0;
}
