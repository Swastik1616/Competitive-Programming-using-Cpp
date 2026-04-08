/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
*/
// Wrong ans
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while(t--){
// 	    int x,y;
// 	    cin >> x >> y;
// 	    if ((y >= (x/2)) && y<=x) cout << "YES\n";
// 	    else cout << "NO\n";
// 	}

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if ((y >= ceil(x/2.0)) && y<=x) cout << "YES\n";
	    else cout << "NO\n";
	}

}
