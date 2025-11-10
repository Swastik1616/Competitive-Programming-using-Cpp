/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a<b && (b-a)<=x)  cout << "YES\n";
        else if(b<a && (a-b)<=y) cout << "YES\n";
        else if(a==b) cout << "YES\n";
        else cout << "NO\n";
    }
}
