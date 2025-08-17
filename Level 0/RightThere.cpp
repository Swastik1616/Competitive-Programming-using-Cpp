/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RIGHTTHERE
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(n<=x) cout << "YES\n";
        else cout << "NO\n";
    }
}
