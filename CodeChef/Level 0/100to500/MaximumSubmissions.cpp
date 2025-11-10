/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MAXIMUMSUBS
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
        int total = x * 60 ;
        cout << ceil(total/30) << endl;
    }
}
