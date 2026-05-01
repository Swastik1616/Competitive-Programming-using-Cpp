// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MXEVNSUB

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if((n*(n+1)/2)%2 == 0) cout << n << endl;
        else cout << n-1 << endl;
    }
}