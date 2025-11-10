/* Problem Link - 
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int x;
        double y;
        cin >> x >> y;
        if((x % 5 == 0) && (x+0.5 <= y)) cout << y - x - 0.5 << endl;
        else cout << y << endl;
}
