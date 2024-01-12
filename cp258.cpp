#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int  ans = 0;
    int head = -1;
    int tail = 0;
    int cnt0 = 0;

    while(tail < n){
        while(head + 1 <n && cnt0 + (1-a[head+1]) <= k){
            head++;
            cnt0+= (1-a[head+1]);
        }
        ans = max(ans, head - tail + 1);
        if(head >= tail){
            cnt0 -= (1-a[tail]);
            tail++;
        }
        else{
            tail++;
            head = tail -1;
        }
    }

    cout << ans << endl;
return 0;
}
