/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x<3) cout << "LIGHT\n";
        else if(x<7) cout << "MODERATE\n";
        else cout << "HEAVY\n";
    }
}
