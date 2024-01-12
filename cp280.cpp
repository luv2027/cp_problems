#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s[n];
    for(int i=0; i<n;i++){
        cin >> s[i];
    }


    int ans = n;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if((s[i].length() + s[j].length())%2 == 0){
                long long  num = std::stoll(s[i]+s[j]);
                int s1 = 0;
                int s2 = 0;
                int l = (s[i].size()+s[j].size())/2;
                int div = 1;
                while(l--){
                    div*=10;
                }
                int num1 = num/div;
                int num2 = num%div;

                while(num1!=0){
                    s1+=num1%10;
                    num1/=10;
                }

                while(num2 != 0){
                    s2+= num2%10;
                    num2/=10;
                }

                if(s1 == s2 && s1!=0){
                    ans ++;
                }



                long long num3 = std::stoll(s[j]+s[i]);
                int s3 = 0;
                int s4 = 0;
                int l1 = (s[i].size()+s[j].size())/2;
                int div1 = 1;
                while(l1--){
                    div1*=10;
                }
                int num4 = num3/div1;
                int num5 = num3%div1;

                while(num4!=0){
                    s3+=num4%10;
                    num4/=10;
                }

                while(num5 != 0){
                    s4+= num5%10;
                    num5/=10;
                }

                if(s3 == s4 && s3!=0){
                    ans ++;
                }
            }
        }
    }

    cout << ans << endl;
return 0;
}
