/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/SUPCHEF
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int m,n,k;
        cin >> m >> n >> k;
        if(n*k<m) cout << "YES\n";
        else cout << "NO\n";
    }
}
