/* Problem Link -
https://www.codechef.com/practice/course/cpp/PCPP03/problems/ONEFULPAIRS
*/
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	// your code goes here
	if((a + b + (a*b)) == 111) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
