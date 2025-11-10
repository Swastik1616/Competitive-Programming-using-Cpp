/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin  >> n;
        cout << n - n/5 << endl;
    }
}
