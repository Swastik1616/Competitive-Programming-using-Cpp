// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CHEFCONTEST

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,p,q;
        cin >> x >> y >> p >> q;
        int c1 = x + p*10;
        int c2 = y + q*10;
        if(c1<c2) cout << "Chef\n";
        else if(c2<c1) cout << "Chefina\n";
        else cout << "Draw\n";
    }
}
