// Problem Link - https://www.codechef.com/START240D/problems/POINTT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    if(x>a) cout << "Alice\n";
    else if(a>x) cout << "Bob\n";
    else if(y>b) cout << "Alice\n";
    else if(b>y) cout << "Bob\n";
    else cout << "Alice\n";
}
