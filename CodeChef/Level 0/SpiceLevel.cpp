/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENSPICE
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
        if(x<4) cout << "MILD\n";
        else if(x<7) cout  << "MEDIUM\n";
        else cout << "HOT\n";
    }
}
