/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD
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
        if(a+c==180 && b+d==180) cout << "YES\n";
        else cout << "NO\n";
    }
}
