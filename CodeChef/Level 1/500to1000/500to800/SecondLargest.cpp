/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW017
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a>b && b>c || c>b && b>a) cout << b << endl;
        else if(a>c && c>b || b>c && c>a) cout << c << endl;
        else if(b>a && a>c || c>a && a>b) cout << a << endl;
        
    }
}
