// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CCISLAND

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float x,y,xr,yr,D;
        cin >> x >> y >> xr >> yr >> D;
        if(x/xr >= D && y/yr >= D) cout << "YES\n";
        else cout << "NO\n";
    }
}
