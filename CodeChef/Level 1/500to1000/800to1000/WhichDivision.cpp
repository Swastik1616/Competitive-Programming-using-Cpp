// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/WHICHDIV

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;
        if(r<1600) cout << "3\n";
        else if(1600<=r && r<2000) cout << "2\n";
        else cout << "1\n";
    }
}
