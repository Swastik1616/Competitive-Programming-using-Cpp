// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MARARUN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float D,d,a,b,c;
        cin >> D >> d >> a >> b >> c;
        float ans = 0;
        if(10/d <= D) ans = a;
        if(21/d <= D) ans = b;
        if(42/d <= D) ans = c;
        cout << ans << endl;
    }
}   
