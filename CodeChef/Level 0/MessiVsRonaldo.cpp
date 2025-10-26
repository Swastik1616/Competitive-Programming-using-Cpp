/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MVR
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int m = 2*a+b;
    int r = 2*x+y;
    if(m>r) cout << "Messi\n";
    else if(r>m) cout << "Ronaldo\n";
    else cout << "Equal";
}
