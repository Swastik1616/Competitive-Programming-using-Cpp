// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/MATCHES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ans = 0;
        int sum = a+b;
        while(sum!=0){
            int d = sum % 10;
            if(d==2 || d==3 || d==5) ans+=5;
            else if(d==0 || d==6 || d==9) ans+=6;
            else if(d==1) ans+=2;
            else if(d==7) ans+=3;
            else if(d==8) ans+=7;
            else if(d==4) ans+=4;
            sum/=10;
        }
        cout << ans << endl;
    }
}
