/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AIRLINES
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
        if(y<=10*x) cout << y*z << endl;
        else cout << 10*x*z << endl;
    }
}
