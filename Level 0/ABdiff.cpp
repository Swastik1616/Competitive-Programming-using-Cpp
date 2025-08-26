/*Problem Link -
https://www.codechef.com/practice/course/cpp/PCPP04/problems/ABDIFF
*/
#include <iostream>
using namespace std;

int main() {
    int a,b,sum,prod;
    cin>>a>>b;
	// your code goes here
	sum = a + b;
	prod = a * b;
	if(sum >= prod)
	    cout << sum - prod << endl;
	else cout << prod - sum << endl;
	return 0;
}
