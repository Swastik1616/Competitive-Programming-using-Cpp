// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/EQLZING

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if((b-a)%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
}