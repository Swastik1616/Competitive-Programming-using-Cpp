/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHAIRS_
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
        if (y>x) cout << "0\n";
        else cout << x-y << endl;
    }
}
