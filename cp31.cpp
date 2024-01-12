#include <iostream>
#include <cstring>
using namespace std;


int main(){
    string s;
	cin>>s;
	string s1;
	cin >> s1;

	string ans = "";
	for(int i=0; i<s.length(); i++){
        if(s[i] == s1[i]){
            ans += '0';
        }
        else{
            ans += '1';
        }
	}

	cout << ans << endl;
return 0;
}
