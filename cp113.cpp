#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

char a[100005],b[100005];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int l1,l2,i,j,k,p;
    char x,y;

    while (sf ("%s\n%s",a,b) != EOF)
    {
        l1 = strlen(a);
        l2 = strlen(b);

        if (l1 != l2)
            pf ("NO\n");
        else
        {
            k = 0;
            p = 0;

            for (i=0; i<l1; i++)
            {
                if (a[i] != b[i])
                {
                    ++k;

                    if (k == 1)
                    {
                        x = a[i];
                        y = b[i];
                    }
                    else if (k == 2)
                    {
                        if (a[i] == y && b[i] == x)
                            p = 1;
                    }
                    else
                        break;
                }
            }

            if (p == 1 && k == 2)
                pf ("YES\n");
            else
                pf ("NO\n");
        }
    }

    bair_ho;
}
