#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll l,r;


void lucky_num(ll n, set<ll>&s)
{
    s.insert(n);
    if(n<r)
    {
        lucky_num(n*10+4,s);
        lucky_num(n*10+7,s);
    }
}

int main()
{
    ll l,r,m,n,x,ans=0;
    cin>>l>>r;
    set<ll>s;
    lucky_num(0,s);


    while(l<=r)
    {
        ll it=s.lower_bound(l);
        l++;
        ans += it;
    }
    cout << ans << endl;
return 0;
}
