/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float a,b,x,y;
        cin >> a >> b >> x >> y;
        if(float(a/x) < float(b/y)) cout << "Chef\n";
        else if(float(b/y) < float(a/x)) cout << "Chefina\n";
        else cout << "Both\n";
    }
}
