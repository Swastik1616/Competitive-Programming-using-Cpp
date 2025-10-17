/* Problem Link -
https://www.codechef.com/learn/course/cpp-beginner-v2-p1/BP00BC16_V2/problems/AORB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int res1 = 500-(2*x) + 1000-(4*(x+y));
        int res2 = 500-(2*(x+y)) + 1000-(4*y);
        cout << max(res1,res2)<< endl;
    }
}
