/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRACTICEPERF
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int count = 0;
    if(a>=10) count++;
    if(b>=10) count++;
    if(c>=10) count++;
    if(d>=10) count++;
    cout << count << endl;
}
