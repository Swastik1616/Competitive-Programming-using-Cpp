// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ELECTIONS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a>50) cout << "A\n";
        else if(b>50) cout << "B\n";
        else if(c>50) cout << "C\n";
        else cout << "NOTA\n";
    }
}