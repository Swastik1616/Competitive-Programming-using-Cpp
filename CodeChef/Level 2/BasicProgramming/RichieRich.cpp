/* Problem Link -
https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int A,B,X,expected,ytime;
	    cin >> A >> B >> X;
	    expected = B - A;
	    ytime = expected/X;
	    cout << ytime << endl;
	}

}
