// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CHEFSLP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,l,x;
        cin >> n >> l >> x;
        cout << min(n-l,l) * x << endl;
    }
}
