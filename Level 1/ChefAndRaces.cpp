/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
         int x,y,a,b;
         cin >> x >> y >> a >> b;
         if((x==a || x==b) && (y==a || y==b)) cout << "0\n";
         else if((x!=a && x!=b) && (y!=a && y!=b)) cout << "2\n";
         else cout << "1\n";
    }
}
