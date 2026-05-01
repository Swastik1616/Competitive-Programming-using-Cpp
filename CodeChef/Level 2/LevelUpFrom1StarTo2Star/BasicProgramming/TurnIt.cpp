// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/NFS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float u,v,a,s;
        cin >> u >> v >> a >> s;
        if(v*v >= u*u - 2*a*s) cout << "YES\n";
        else cout << "NO\n";
    }
}