/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        if(x>y && x>z){
            if(y>z) cout << y << endl;
            else cout << z << endl;
        }
        else if(y>z && y>x){
            if(x>z) cout << x << endl;
            else cout << z << endl;
        }
        else if(z>x && z>y){
            if(x>y) cout << x << endl;
            else cout << y << endl;
        }
    }
}

// Alternate Approach:
/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int x, y, z;
        cin >> x >> y >> z;
        int max_val = max({x, y, z});
        int min_val = min({x, y, z});
        int result = x + y + z - max_val - min_val;
        cout << result << endl;
    }
    return 0;
}
*/