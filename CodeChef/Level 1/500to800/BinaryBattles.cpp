/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int r = log(n)/log(2);
        cout << (r)*(a+b) - b << endl;
    }
}
