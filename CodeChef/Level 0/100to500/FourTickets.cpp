/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if (4*x <= 1000) cout << "YES\n";
        else cout << "NO\n";
    }
}
