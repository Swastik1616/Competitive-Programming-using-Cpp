/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b;
        cin >> c >> d;
        if(a<=c && b<=d) cout << "POSSIBLE\n";
        else cout << "IMPOSSIBLE\n";
    }
}
