/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF
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
        cout << abs(y-x) << endl;
    }
}
