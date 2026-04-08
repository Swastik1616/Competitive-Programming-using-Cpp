/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
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
        cout <<  ceil((n*x)/4.0) << endl;
    }
}
