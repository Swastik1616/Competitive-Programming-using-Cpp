// Problem Link - https://www.codechef.com/START234D/problems/BAKERY7

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin >> n >> k;
    cout << min(n*100,n*60 + k) << endl;
}
