// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MAX_DIFF

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin >> n >> s;
        if(n==s) cout << n << endl;
        else if(s<n) cout << s << endl;
        else cout << 2*n - s << endl;
    }
}
