/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if((10*a)>(5*b)) cout << "FIRST\n";
        else if((10*a)<(5*b)) cout << "SECOND\n";
        else cout << "ANY\n";
    }
}