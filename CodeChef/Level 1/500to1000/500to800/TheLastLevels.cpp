/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int breaks = x/3;
        if(x%3 != 0) cout << x*y + z*breaks << endl;
        else cout << x*y + z*(breaks-1) << endl;
    }
}
