/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUCTION
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a>b && a>c) cout << "ALICE\n";
        else if(b>a && b>c) cout << "BOB\n";
        else cout << "CHARLIE\n";
    }
}   
