// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFSPL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        cout << (a+b+c) - min(a,min(b,c)) << endl;
    }
}
