// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BREAKSTICK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(n%2!=0){
            if(x%2==0) cout << "NO\n";
            else cout << "YES\n";
        }
        else cout << "YES\n";
    }
}
