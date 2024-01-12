#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
    int m,k,ai,ak;

    cin>>m>>k>>ai>>ak;

    int numf_of_coins = m - min(m-k*(min(m/k,ak)),ai) - k*min(m/k,ak);

    if(ai>=m)
    {
        cout<<0<<endl;
    }
    else if(numf_of_coins%k==0)
    {
            cout<<numf_of_coins/k<<endl;
    }
    else if((k-numf_of_coins%k)<=min(m-k*(min(m/k,ak)),ai))
    {
        cout<<numf_of_coins/k+1<<endl;
    }
    else{
            cout<<numf_of_coins/k+numf_of_coins%k<<endl;
    }
    }
return 0;
}


