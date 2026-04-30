// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/BRLADDER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int q;
    cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        if((abs(a-b)==2) || ((abs(a-b)==1) && min(a,b)%2!=0)) cout << "YES\n";
        else cout << "NO\n";
    }
}