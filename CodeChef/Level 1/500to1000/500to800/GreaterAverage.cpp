/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int A,B,C;
        cin >> A >> B >> C;
        float avg = (A+B)/2.0;
        (avg > C) ? cout << "YES\n" : cout << "NO\n";
    }
}

/*division in cpp is by default integer divison, 
hence remember to divide by 2.0 instead of 2 
for correct results
*/