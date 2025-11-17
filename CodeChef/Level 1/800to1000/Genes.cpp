/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/GENE01
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char a,b;
	cin >> a >> b;
	if(a==b) cout << a << endl;
	else if((a=='R' && (b=='B' || b=='G')) || (b=='R' && (a=='B' || a=='G'))) 
	    cout << 'R' << endl;
	else if((a=='G' && (b=='R' || b=='B')) || (b=='G' && (a=='B' || a=='R')))
	    cout << b << endl;
}
