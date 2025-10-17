/* Problem Link -
https://www.codechef.com/learn/course/cpp-beginner-v2-p1/BP00BC16_V2/problems/ACS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int p;
        cin >> p;
        if(p%100==0 && p/100 <= 10) cout << p/100 << endl;
        else if(p%100!=0 && (p/100 + p%100) <=10) cout << p/100 + p%100 << endl;
        else cout << -1 << endl;
    }
}
