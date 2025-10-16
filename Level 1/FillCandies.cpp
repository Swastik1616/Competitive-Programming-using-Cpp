/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k,m;
        cin >> n >> k >> m;
        cout << ceil(n/float(k*m)) << endl;
    }
}
