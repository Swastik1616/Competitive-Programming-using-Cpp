// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PIZZA_BURGER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(y<=x) cout << "PIZZA\n";
        else if(z<=x) cout << "BURGER\n";
        else cout << "NOTHING\n";
    }
}
