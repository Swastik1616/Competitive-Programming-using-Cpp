/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OCTATHON
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
    cin >> x;
	if(x<3) cout << "GOLD\n";
	else if(x<6) cout << "SILVER\n";
	else cout << "BRONZE\n";
}
