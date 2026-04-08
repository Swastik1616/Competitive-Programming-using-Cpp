/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a*b<=x*y) cout << "YES\n";
        else cout << "NO\n";
    }
}
