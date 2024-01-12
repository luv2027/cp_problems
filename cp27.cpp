#include <iostream>
#include <cstring>
using namespace std;


int main(){
    string s;
	cin>>s;
	        char ch;
		    for(int i=0;i<s.size();i++){
	           if(i==0){
                    ch=toupper(s[i]);
	           }
	           else{
                ch = s[i];
	           }
	        cout<<ch;
	    }
return 0;
}
