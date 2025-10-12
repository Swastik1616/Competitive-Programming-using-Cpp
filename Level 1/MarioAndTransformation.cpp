/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x%3 == 0) cout << "NORMAL\n";
        else if(x%3 == 1) cout << "HUGE\n";
        else cout << "SMALL\n";
    }
}
