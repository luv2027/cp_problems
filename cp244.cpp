#include<bits/stdc++.h>
using namespace std;

void push(deque<int>&d, int x){
    while(!d.empty() && x>d.back()){
        d.pop_back();
    }
    d.push_back(x);
    return;
}

void pop(deque<int>&d, int x){
    if(!d.empty() && x==d.front()){
      d.pop_front();
    }
    return;
}

int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    deque<int> d;
    for(int i=0; i<k; i++){
        push(d, a[i]);
    }

    for(int i=k; i<n; i++){
        cout << d.front() << endl;
        push(d, a[i]);
        pop(d, a[i-k]);
    }
return 0;
}
