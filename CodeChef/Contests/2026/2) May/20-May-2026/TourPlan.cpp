// Problem Link - https://www.codechef.com/START239D/problems/TOURPLAN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y,z;
    cin >> x >> y >> z;
    if(z>50) cout << x + (z-50)*y << "\n";
    else cout << x << "\n";
}