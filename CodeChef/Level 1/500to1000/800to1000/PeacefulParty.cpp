// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MAYOR_PARTY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        cout << max(a+c,b) << endl;
    }
}
