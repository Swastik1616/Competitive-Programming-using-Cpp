/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BUDGET_
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x>=y*30) cout << "YES\n";
        else cout << "NO\n";
    }
}
