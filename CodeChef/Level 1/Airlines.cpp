/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,n;
        cin >> x >> n;
        if(n<100*x) cout << 0 << endl;
        else cout << ceil(n/100.0) - x << endl;
    }
}
