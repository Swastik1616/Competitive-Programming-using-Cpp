// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CHFPROFIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        cout << x*(z-y) << endl;
    }
}