/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CS2023_GIFT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,n,m;
    cin >> x >> n >> m;
    int rem = n - x;
    if(rem<=m) cout << "YES\n";
    else cout << "NO\n";
}
