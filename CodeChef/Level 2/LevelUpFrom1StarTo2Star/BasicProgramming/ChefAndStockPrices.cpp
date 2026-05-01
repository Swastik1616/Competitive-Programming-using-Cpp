// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CSTOCK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float s,a,b,c;
        cin >> s >> a >> b >> c;
        float newP = s + s*c/100;
        if(newP<a || newP>b) cout << "NO\n";
        else cout << "YES\n";
    }
}
