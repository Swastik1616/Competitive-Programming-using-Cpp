/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERFLOW
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int w,x,y,z;
        cin >> w >> x >> y >> z;
        if(y*z > x-w) cout << "overflow\n";
        else if(y*z < x-w) cout << "unfilled\n";
        else cout << "filled\n";
    }
}
