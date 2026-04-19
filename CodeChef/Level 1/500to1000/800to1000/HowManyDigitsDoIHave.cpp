// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/HOWMANY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin >> s;
    int ans = s.size();
    if(ans<=3) cout << s.size() << endl;
    else cout << "More than 3 digits" << endl;
}
