// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/WEIGHTBL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int w1,w2,x1,x2,M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        if((w2-w1<x1*M) || (w2-w1>x2*M)) cout << 0 << endl;
        else cout << 1 << endl;
    }
}