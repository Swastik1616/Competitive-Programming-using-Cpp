/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float a,x,b,y;
        cin >> a >> x >> b >> y;
        if(a/x > b/y) cout << "Alice\n";
        else if(a/x < b/y) cout << "Bob\n";
        else cout << "Equal\n";
    }
}
