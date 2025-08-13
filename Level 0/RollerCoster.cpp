/* Problem Link - 
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINHEIGHT
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x, h;
        cin >> x >> h;
        if(x>=h) cout << "YES\n";
        else cout << "NO\n";
    }
}
