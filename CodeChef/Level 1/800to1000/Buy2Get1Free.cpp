/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/SALE2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        cout << (n-(n/3))*x << endl;
    }
}
