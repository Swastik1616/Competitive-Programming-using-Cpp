// Problem Link - https://www.codechef.com/START237D/problems/MAKETRIANGLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(x+y>z && x+z>y && y+z>x) cout << 0 << endl;
        else{
            int ans = 0;
            if(x+y<=z) ans = z - (x+y) + 1;
            if(x+z<=y) ans = y - (x+z) + 1;
            if(y+z<=x) ans = x - (y+z) + 1;
            cout << ans << endl;
        }
    }
}