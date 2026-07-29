// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ZEROSTRING

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c1 = 0, c2 = 0;
        for(auto it:s){
            if(it=='1') c1++;
            else c2++;
        }
        if(c1==n) cout << "1\n";
        else cout << min(c1,c2+1) << "\n";
    }
}
