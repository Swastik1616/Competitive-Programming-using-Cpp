/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x%y == 0) cout << x/y << endl;
        else cout << (x/y) + (x%y) << endl;
    }
}
