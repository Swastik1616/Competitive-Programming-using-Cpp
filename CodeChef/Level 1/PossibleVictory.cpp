/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int r,o,c;
    cin >> r >> o >> c;
    if(r-c+1 <= 36*(20-o)) cout << "YES\n";
    else cout << "NO\n";
}
