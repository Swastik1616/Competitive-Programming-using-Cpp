/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here  
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int res = 21-a-b;
        if(res>=1 && res<=10) cout << res << endl;
        else cout << -1 << endl;
    }
}
