#include<bits/stdc++.h>
typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

using namespace std;

int main()
{
    ll i,j,k;
    ll n,m,t;
    ll x,add;

    cin>>n>>m;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    add=0;
    for(i=0;i<m;i++)
    {
        cin>>t;

        if(t==1)
        {
            cin>>j>>x;
            j--;
            a[j]=x-add;

        }

        else if(t==2)
        {
            cin>>x;
            add+=x;
        }

        else
        {
            cin>>j;j--;
            k=a[j]+add;
            cout<<k<<endl;
        }
    }

    return 0;
}
