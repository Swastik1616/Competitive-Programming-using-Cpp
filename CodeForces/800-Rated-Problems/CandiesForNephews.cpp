/* Problem Link -
https://codeforces.com/problemset/problem/2145/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int par = n%3;
        if(par == 0) cout << "0\n";
        else if(par == 1) cout << "2\n";
        else if(par == 2) cout << "1\n";
    }
}