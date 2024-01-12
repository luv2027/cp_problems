#include<bits/stdc++.h>
using namespace std;

const int N=1e6+10;
bool p[N];

void prime(){
	p[0]=1;p[1]=1;
	for(int i=2;i<1010;i++)
    if(p[i] == 0){
    for(int j=i*i;j<N;j+=i)
			p[j]=1;
    }

}


int main(){
	prime();
	int n;cin>>n;
	while(n--){
		long long x;cin>>x;
		long long s=sqrt(x);
		if(s*s==x && !p[s])
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


	return 0;
}
