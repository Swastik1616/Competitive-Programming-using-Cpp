// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/DRUNKALK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        if(k%2==0) cout << k << endl;
        else cout << k + 2 << endl;
    }
}
