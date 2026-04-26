// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/BESTOFTENNIS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        cout << 2 * max(x,y) - 1 << endl;
    }
}