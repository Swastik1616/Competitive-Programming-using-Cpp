// Problem Link - https://www.codechef.com/START243D/problems/INTMTCH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin >> x >> y;
    if(abs(x-y)<=2) cout << "Interesting\n";
    else cout << "Boring\n";
}