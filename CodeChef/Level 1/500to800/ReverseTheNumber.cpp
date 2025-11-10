/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007?tab=statement
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int res = 0;
        while(n>0){
            int d = n % 10; // lastdigit
            res = res * 10 + d;
            n /= 10;
        }
        cout << res << endl;
    }
}
