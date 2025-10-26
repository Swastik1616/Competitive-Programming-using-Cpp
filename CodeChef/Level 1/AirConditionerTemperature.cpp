/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a<=b) && (c<=b)) cout << "YES\n";
        else cout << "NO\n";
    }
}
