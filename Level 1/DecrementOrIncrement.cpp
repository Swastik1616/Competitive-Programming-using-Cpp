/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    if(n%4 == 0) cout << n+1 << endl;
    else cout << n-1 << endl;
}
