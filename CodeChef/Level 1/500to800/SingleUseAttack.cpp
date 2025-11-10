/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float h,x,y;
        cin >> h >> x >> y;
        float temp = h - y;
        cout << ceil(temp/x) + 1 << endl;
    }
}
