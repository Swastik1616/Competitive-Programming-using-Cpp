// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TANDJ1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,K;
        cin >> a >> b >> c >> d >> K;

        int steps = abs(a-c) + abs(b-d);

        if(steps<=K && (K-steps)%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
}
