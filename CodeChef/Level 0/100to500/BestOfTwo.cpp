/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BESTOFTWO
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
        cout << max(x,y) << endl;
    }
}
