/* Problem Link - 
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUGARCANE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 15 * n << endl; // bcoz 15 =0.3 * 50--using this directly was giving precison errors bcozz of floating point
    }
}

