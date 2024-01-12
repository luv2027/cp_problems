#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char v[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>v[i][j];

			}
		}
		string s="vika";
		int k=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(v[j][i]==s[k])
				{k++;
				break;
			}
			}
		}
		if(k==4)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}

}
