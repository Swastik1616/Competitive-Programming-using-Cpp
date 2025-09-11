/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CMASKS
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
        if((100*x) < (10*y)) cout << "DISPOSABLE\n";
        else cout << "CLOTH\n";
    }
}
