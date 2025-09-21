/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COURSEREG
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        if(n<=m-k) cout << "YES\n";
        else cout << "NO\n";
    }
}
