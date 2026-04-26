// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/LOOP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,m;
        cin >> a >> b >> m;
        cout << min(abs(b-a),m-abs(b-a)) << endl;
    }
}