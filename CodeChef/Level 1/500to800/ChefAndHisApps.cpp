/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int s,x,y,z;
        cin >> s >> x >> y >> z;
        int rem = s-(x+y);
        if(z<=rem) cout << 0 << endl;
        else{
            if((z<=s-x && !(z<=s-y)) || (z<=s-y && !(z<=s-x)) || (z<=s-y && (z<=s-x)) ) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
}
