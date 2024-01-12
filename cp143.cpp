#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll m,n,b,i,res,x,y,p;

    cin >> n;

    ll a[n+2],ans=0;
    a[0]=0, a[n+1]=0;
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=n;)
    {
        if(a[i]==1 &&a[i+1]==0&&a[i+2]==1 )
        {
            ans++;
            i+=3;
        }
        else i++;
    }
    if(n == 3){
        if(a[0] == 1 && a[1] == 0 && a[2] == 1){
            cout << 1 << endl;
        }
    }
    else{
         cout << (ans);
    }

    return 0;
}

