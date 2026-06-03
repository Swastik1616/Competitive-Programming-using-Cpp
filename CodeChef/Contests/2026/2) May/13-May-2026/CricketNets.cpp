// Problem Link - https://www.codechef.com/START238D/problems/CRNET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x<=20) cout << x*10 << "\n";
        else cout << 200 + ((x-20)/2)*5 << "\n";
    }
}