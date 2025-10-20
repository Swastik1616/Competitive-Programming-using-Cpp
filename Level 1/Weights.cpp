/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS
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
        if(x==w || y==w || z==w || x+y==w || x+z==w || y+z==w || x+y+z==w) 
        cout << "YES\n";
        else cout << "NO\n";
    }
}
