// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/AIRLINE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if((a+b<=d && c<=e) || (a+c<=d && b<=e) || (b+c<=d && a<=e)) cout << "YES\n";
        else cout << "NO\n";
    }
}