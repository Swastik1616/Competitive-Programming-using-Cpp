// Problem Link - https://www.codechef.com/START250D/problems/SUBCOST7

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        if(n>3) cout << 3*x + (n-3)*y << "\n";
        else cout << n*x << "\n";
    }
}