/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n==m) cout << n << endl;
        else if(n>m) cout << 2*(n-m) + m << endl;
        else cout << n << endl;
        
    }
}   
