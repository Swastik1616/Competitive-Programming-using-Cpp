/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int temp = min(a,(min(b,c)));
        cout << a + b + c - temp << endl;
    }
}
