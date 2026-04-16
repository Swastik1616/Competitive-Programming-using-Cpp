// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FACEDIR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x%4==0) cout << "North\n";
        else if(x%4==1) cout << "East\n";
        else if(x%4==2) cout << "South\n";
        else cout << "West\n";
    }
}
