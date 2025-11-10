/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int res1 = abs(x1-x2);
        int res2 = abs(y1-y2);
        cout << max(res1,res2) << endl;
    }
}
