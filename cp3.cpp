#include<bits/stdc++.h>
using namespace std;

const int MAXM = 1e6 + 5;
long long  isprime[MAXM];
set<long long > my_bucket;

void seive(){
	isprime[0] = isprime[1] = 0;
	int lim = sqrt(MAXM);

	for(int i=2; i<=lim; i++){
		if(isprime[i]){
			for(int j=i*i; j<MAXM; j+=i){
				isprime[j] = 0;
			}
		}
	}
}

for(long long i=1; i<MAXM; i++){
	if(isprime[i]){
		my_bucket.push(i*i);
	}
}

int main(){
	int t;
	cin >>t ;
	while(t--){
		int n;
		cin >> n;
		if(my_bucket.find(n) != my_bucket.end()){
			cout << "True" << endl;
		}
		else{
			cout << "False" << endl;
		}
	}
}