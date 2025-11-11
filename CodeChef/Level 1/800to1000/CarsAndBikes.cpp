/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/TYRES
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
        int rem = n % 4;
        int c = rem/2;
        if(c>=1) cout << "YES\n";
        else cout << "NO\n";
    }
}
