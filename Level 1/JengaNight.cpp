/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA
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
        if(x<n || x%n != 0) cout << "NO\n";
        else {
            if(x%n == 0) cout << "YES\n";
        }
    }
}
