#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n+3];
    for(int i=1;i<=n;i++)cin>>ar[i];
    ll pre1[n+4],pre2[n+4];
    pre1[1]=0,pre2[n]=0;
    for(int i=2;i<=n;i++)
    {
        if(ar[i]<ar[i-1])pre1[i]=pre1[i-1]+(ar[i-1]-ar[i]);
        else pre1[i]=pre1[i-1];
    }
    for(int i=n-1;i>0;i--)
    {
        if(ar[i]<ar[i+1])pre2[i]=pre2[i+1]+(ar[i+1]-ar[i]);
        else pre2[i]=pre2[i+1];
    }

    while(m--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
        {
            ll ans=pre1[y]-pre1[x];
            cout<<ans<<endl;
        }
        else
        {
            ll ans = pre2[y]-pre2[x];
            cout<<ans<<endl;
        }
    }
}
