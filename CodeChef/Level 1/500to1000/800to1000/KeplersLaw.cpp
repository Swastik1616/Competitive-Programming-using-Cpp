// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/KEPLERSLAW

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float t1,t2,r1,r2;
        cin >> t1 >> t2 >> r1 >> r2;
        float p1 = (t1*t1)/(r1*r1*r1);
        float p2 = (t2*t2)/(r2*r2*r2);
        if(p1==p2) cout << "YES\n";
        else cout << "NO\n";
    }
}