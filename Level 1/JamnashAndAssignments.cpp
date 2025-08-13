/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JASSIGNMENTS
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x;
        y = 10 - x;
        if(y>=3) cout << "YES\n";
        else cout << "NO\n";
    }
}
