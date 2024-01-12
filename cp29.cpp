#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s;
	cin>>s;
	        ll c =0;
		    for(int i=0;i<s.size()-1;i++){
                    if(s[i] == s[i+1]){
                        c++;
                    }
	    }
	    cout << c << endl;
return 0;
}
