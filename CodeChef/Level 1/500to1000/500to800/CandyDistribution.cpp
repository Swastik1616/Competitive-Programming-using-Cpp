/* Problem Link - 
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if((n/m)%2 == 0 && n%m==0) cout << "YES\n";
        else cout << "NO\n";
    }
}
