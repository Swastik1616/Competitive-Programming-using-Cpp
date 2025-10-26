/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/M1ENROL
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
        if(y>x) cout << y-x << endl;
        else cout << "0\n";
    }
}
