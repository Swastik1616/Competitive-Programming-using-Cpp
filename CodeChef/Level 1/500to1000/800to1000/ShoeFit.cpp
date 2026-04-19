// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/SHOEFIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==b && b==c && c==1 || a==b && b==c && c==0) cout << 0 << endl;
        else cout << 1 << endl;
    }
}
