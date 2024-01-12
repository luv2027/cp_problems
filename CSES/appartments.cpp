#include<bits/stdc++.h>
using namespace std;

int main(){
   long long n,m,k;
   vector<bool> v;
   cin >> n >> m >> k;
   int applicant[n];
   for(int i=0; i<n; i++){
    cin >> applicant[i];
   }
   int appartment[m];
   for(int i=0 ; i<n; i++){
    cin >> appartment[i];
   }

   long long count = 0;
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
            if(v[j] == false){
                  if(applicant[i] == appartment[j]){
                      count ++;
                      v[i] = true;
        }
            }

    }
   }
   for(int i=0; i<n; i++){
       applicant[i] = applicant[i] + k;
   }
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
            if(v[j] == false){
                  if(applicant[i] == appartment[j]){
                      count ++;
                      v[i] = true;
        }
            }

    }
   }
      for(int i=0; i<n; i++){
       applicant[i] = applicant[i] - 2*k;
   }
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
            if(v[j] == false){
                  if(applicant[i] == appartment[j]){
                      count ++;
                      v[i] = true;
        }
            }

    }
   }
   cout << count;
}
