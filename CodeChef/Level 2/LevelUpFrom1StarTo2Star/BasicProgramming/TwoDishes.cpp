// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TWODISH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,a,b,c;
        cin >> n >> a >> b >> c;
        if(min(b,a+c)>=n) cout << "YES\n";
        else cout << "NO\n";
    }
}