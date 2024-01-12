#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    unordered_map<int, int> mp;
    int head = -1;
    int tail = 0;
    int ans = 0;

    while(tail<n){
        while(head + 1 < n && ((mp.size() < k)&& mp.count(a[head+1]) == 0) || (mp.size<=k && mp.find(a[head+1])!= mp.end())){
            head++;
            mp[a[head]]++;
        }
        ans = max(ans, head-tail+1);
        if(tail<head){
            mp[a[tail]]--;
            if(mp[a[tail]] == 0){
                mp.erase(a[tail]);
            }
            tail++;
        }
        else{
            tail++;
            head = tail-1;
        }
    }

    cout << ans << endl;
return 0;
}
