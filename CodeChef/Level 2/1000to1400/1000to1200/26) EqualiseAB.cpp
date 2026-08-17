// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EQUALIZEAB?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,x;
        cin >> a >> b >> x;
        if((a-b)%(2*x)==0) cout << "YES\n";
        else cout << "NO\n";
    }
}