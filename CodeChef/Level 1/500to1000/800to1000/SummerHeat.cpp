// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/COCONUT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,X,Y;
        cin >> x >> y >> X >> Y;
        int countA = X/x;
        int countB = Y/y;
        cout << countA + countB << endl;
    }
}
