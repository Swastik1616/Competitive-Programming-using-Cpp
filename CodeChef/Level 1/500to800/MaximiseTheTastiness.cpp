/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << max(max(a+c,a+d),max(b+c,b+d)) << endl;
    }
}
