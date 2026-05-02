// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MANYSUMS
// crazy question - first tried brute force and then from observation found easier approach

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int L,R;
        cin >> L >> R;
        // bcoz it will have all numbers in this range.
        cout << (2*R) - (2*L) + 1 << endl;
    }
}
