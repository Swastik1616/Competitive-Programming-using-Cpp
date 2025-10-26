/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,a,b;
        cin >> x >> a >> b;
        if(a+2*b >= x) cout << "Qualify\n";
        else cout << "NotQualify\n";
    }
}
