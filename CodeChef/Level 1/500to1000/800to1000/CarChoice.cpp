// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CARCHOICE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float a,b,c,d;
        cin >> a >> b >> c >> d;
        float c1 = c/a;
        float c2 = d/b;
        if(c1<c2) cout << "-1\n";
        else if(c2<c1) cout << "1\n";
        else cout << "0\n";
    }
}
