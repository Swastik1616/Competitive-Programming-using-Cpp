/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,p;
        cin >> n >> x >> p;
        int res = x*3 - (n-x);
        if(res>=p) cout << "Pass\n";
        else cout << "Fail\n";
    }
}
