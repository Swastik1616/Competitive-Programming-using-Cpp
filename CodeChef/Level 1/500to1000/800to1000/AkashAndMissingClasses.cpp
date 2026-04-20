// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CHFCLASS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=5) cout << 0 << endl;
        else if(n==6) cout << 1 << endl;
        else if(n%7==6) cout << n/7 + 1 << endl;
        else cout << n/7 << endl;
    }
}
