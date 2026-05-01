// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/SMOL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k!=0) cout << n - (n/k) * k << endl;
        else cout << n << endl;
    }
}