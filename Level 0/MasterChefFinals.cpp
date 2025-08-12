/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TOP10
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int rank;
        cin >> rank;
        if(rank<=10) cout << "YES\n";
        else cout << "NO\n";
    }
}
