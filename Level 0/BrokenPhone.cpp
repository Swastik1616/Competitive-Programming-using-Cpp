/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BROKENPHONE
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
        if(x<y) cout << "REPAIR\n";
        else if(x>y) cout << "NEW PHONE\n";
        else cout << "ANY\n";
    }
}
