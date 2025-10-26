/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING
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
        cout << ceil((y-x)/8.0) << endl;
    }
}
