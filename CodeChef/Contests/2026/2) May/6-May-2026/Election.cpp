// Problem Link - https://www.codechef.com/START237D/problems/ELECTION1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin >> n >> k;
    int req = n/2 + 1;
    if(k<req) cout << req - k << endl;
    else cout << 0 << endl;
}
