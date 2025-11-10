/* Problem Link - 
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HOTCOLD
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int c;
        cin >> c;
        if(c>20) cout << "HOT\n";
        else cout << "COLD\n";
    }
}