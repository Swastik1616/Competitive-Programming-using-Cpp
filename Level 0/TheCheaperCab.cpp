/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CABS
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
	    if(x>y) cout << "SECOND\n";
	    else if(x<y) cout << "FIRST\n";
	    else cout << "ANY\n";
	}

}
