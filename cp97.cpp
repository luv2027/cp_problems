#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[m];
    priority_queue<int> maxh;
    priority_queue <int, vector<int> , greater<int>> minh;
    for(int i=0; i<m; i++){
        cin >> a[i];
        maxh.push(a[i]);
        minh.push(a[i]);
    }

    long long maxi = 0;
    int num = n;
    while(num--){
        int first = maxh.top();
        maxi += first;
        maxh.pop();
        first --;
        maxh.push(first);
    }

    long long mini = 0;
    while(n--){
        int last = minh.top();
        mini += last;
        minh.pop();
        last --;
        if(last > 0){
             minh.push(last);
        }
    }

    cout << maxi << " " << mini << endl;
return 0;
}
