/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float x,y,r;
        cin >> x >> y >> r;
        float s1 = r/30;
        float s2 = x+s1;
        float res = ceil(s2/y);
        cout << res << endl;
    }
}
