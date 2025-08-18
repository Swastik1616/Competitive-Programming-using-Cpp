/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(z > (x*y)/2) cout << "YES\n";
        else cout << "NO\n";
    }
}
