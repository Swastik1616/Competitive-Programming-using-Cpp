/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,d;
        cin >> x >> y >> d;
        if(abs(x-y)<=d) cout << "YES\n";
        else cout << "NO\n";
    }
}
