/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SONGS
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
        cout << n/(3*x) << endl;
    }
}
