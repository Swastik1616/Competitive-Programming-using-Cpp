/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TALLER
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
        if(x>y) cout << "A\n";
        else if (x<y) cout << "B\n";
        else continue;
    }
}
