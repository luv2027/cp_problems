#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
        ll i,j,k;
        ll n;

        cin>>n;
        map<ll,ll> fr;

        for(i=0;i<n;i++)
        {
            cin>>k;
            fr[k]++;
        }

        ll q1=fr[100];
        ll q2=fr[200];

        //divide 200's equally
        ll baki_200=q2%2;
        ll baki_100=q1-(baki_200*2);

        if(baki_100>=0 && baki_100%2==0)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}
