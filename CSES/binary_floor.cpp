#include<bits/stdc++.h>
using namespace std;

int binary_search1(int arr[], int target[], int n, int k, int i){

           int start = -1;
           int end = n-1;
           while(start+1 < end ){
              int mid = start + (end-start)/2;

              if(arr[mid] >= target[i]){
                  end = mid;
              }
              else{
                  start = mid;
              }
              }
   return start+1;
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
