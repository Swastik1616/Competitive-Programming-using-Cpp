/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FAIRPASS
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k-1>=n) cout << "YES\n"; // because one pass will be his own
        else cout << "NO\n";
    }
}
