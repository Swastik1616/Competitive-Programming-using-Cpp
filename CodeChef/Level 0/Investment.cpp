/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INVESTMENT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x >= (2*y)) cout << "YES\n";
        else cout << "NO\n";
    }
}
