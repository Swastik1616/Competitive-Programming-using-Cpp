/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND
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
        if(n<=x) cout << '0' << endl;
        else cout << ceil((n-x)/4.0) << endl;
    }
}
