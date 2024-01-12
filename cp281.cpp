#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e3 + 5;

int n;
int a[N], b[N];

int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		bool sorted = 1, have0 = 0, have1 = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if(i >= 2 && a[i] < a[i - 1])
				sorted = 0;
		}
		for(int i = 1; i <= n; i++)
		{
			cin >> b[i];
			if(!b[i])
				have0 = 1;
			else
				have1 = 1;
		}
		if(have0 && have1)
			cout << "Yes" << endl;
		else if(sorted)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
