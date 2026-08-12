// https://www.codechef.com/START251D/problems/CHKEV

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int l,r;
    cin >> l >> r;
    if(l==r && l&1 ) cout << "NO\n";
    else cout << "YES\n";
}