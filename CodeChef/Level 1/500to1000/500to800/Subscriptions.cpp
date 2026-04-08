/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,subs;
        cin >> n >> x;
        subs = ceil(n/6.0);
        if(n<=6) cout << subs * x << endl;
        else cout << subs * x << endl;
    }
}
