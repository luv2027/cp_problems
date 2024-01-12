
#include <bits/stdc++.h>
#define run  ios_base::sync_with_stdio(false);cin.tie(0);

#define ll long long
#define ull unsigned ll
#define ld long double
#define endl "\n"
#define gcd(x, y)  __gcd(x, y)
#define pb push_back

#define pi 3.14159265359
#define N 1007
#define minimum -9223372036854775807
#define maximum -minimum
#define mod 1000003

using namespace std;

int main()
{
    run;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll l=s.length();
        s='0'+s;
        reverse(s.begin(), s.end());
        ll m=0;
        for(ll i=0; i<l; i++)
        {
            if(s[i]>='5')
            {
                s[i+1]++;
                for(ll j=i; j>=m; j--)
                {
                    s[j]='0';
                }
                m=i;
            }
        }
        reverse(s.begin(), s.end());
        if(s[0]=='0')
        {
          for(ll i=1; i<=l; i++)
          {
              cout<<s[i];
          }
          cout<<endl;
        }
        else
        {
        for(ll i=0; i<=l; i++)
          {
              cout<<s[i];
          }
          cout<<endl;
        }

    }
    return 0;
}
