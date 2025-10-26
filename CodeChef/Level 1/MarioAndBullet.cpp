/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET
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
        if(y/x < z) cout << z - y/x << endl;
        else cout << 0 << endl;
    }
}
