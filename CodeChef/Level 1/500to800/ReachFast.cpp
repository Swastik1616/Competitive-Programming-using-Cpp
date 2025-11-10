/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float a,b,k;
        cin >> a >> b >> k;
        cout << ceil(float(abs(a-b)/k)) << endl;
    }
}
