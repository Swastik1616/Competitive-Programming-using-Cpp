// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CONN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1 || n==3 || n==5) cout << "NO\n";
        else cout << "YES\n";
    }
}