/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CGYM
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(z>=x && z<x+y) cout << "1\n";
        else if(z>=x+y) cout << "2\n";
        else cout << "0\n";
    }
}
