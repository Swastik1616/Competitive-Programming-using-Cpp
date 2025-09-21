/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ASSIGNMNT
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
        if(x*y <= z*24*60) cout << "YES\n";
        else cout << "NO\n";
    }
}
