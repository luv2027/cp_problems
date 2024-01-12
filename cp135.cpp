#include<bits/stdc++.h>
using namespace std;
char str[400001];
int k;
int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int n,i;
    char x;

    scanf("%d %d\n%s",&n,&k,str);

    for (x='a'; x<='z'; x++)
    {
        if (k == 0)
            break;

        for (i=0; i<n; i++)
        {
            if (k == 0)
                break;

            if (str[i] == x)
            {
                str[i] = ' ';
                --k;
            }
        }
    }

    for (i=0; i<n; i++)
    {
        if (isspace(str[i]))
            continue;

        printf ("%c",str[i]);
    }

    printf ("\n");

    return 0;
}
