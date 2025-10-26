/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMESs
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
        if ((a==0) && (b==0) && (c==0) && (d==0)) cout << "IN\n";
        else cout << "OUT\n";
    }
}
