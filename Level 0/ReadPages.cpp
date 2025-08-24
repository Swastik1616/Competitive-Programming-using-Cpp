/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        if(x*y>=n) cout << "YES\n";
        else cout << "NO\n";
    }
}
