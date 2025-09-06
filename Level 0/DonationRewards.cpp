/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOREWARD
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
        if(x<=3) cout << "BRONZE\n";
        else if(x<=6) cout << "SILVER\n";
        else cout << "GOLD\n";
    }
}
