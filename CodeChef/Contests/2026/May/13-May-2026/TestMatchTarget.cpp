// Problem Link - https://www.codechef.com/START238D/problems/TESTTGT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y,z;
    cin >> x >> y >> z;
    if(y<=x+z) cout << (x+z) - y + 1;
    else cout << 0;
}