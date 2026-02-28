// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MELTGOLD

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int ans = 0;
        while(y<x){
            y += ans + 1;
            ans++;
        }
        cout << ans << endl;
    }
}
