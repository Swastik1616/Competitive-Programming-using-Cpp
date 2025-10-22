/* Problem Link -
https://www.codechef.com/learn/course/cpp-beginner-v2-p1/BP00BC16_V2/problems/FLOORS
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
        cout << abs(ceil(y/10.0) - ceil(x/10.0)) << endl;
    }
}