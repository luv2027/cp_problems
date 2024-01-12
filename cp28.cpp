#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

int main(){
    string s;
	cin>>s;
	        ll c =0;
		    for(int i=0;i<s.size();i++){
                    if(s[i] == '4' || s[i] == '7'){
                        c++;
                    }
	    }
	    int n = c;
	    while(c > 0){
            if((c%10 != 4) && (c%10 != 7)){
                cout << "NO" << endl;
                return 0;
            }
            c/=10;
	    }
	    if(n == 0){
            cout << "NO" << endl;
            return 0;
	    }
	    cout << "YES" << endl;
return 0;
}
