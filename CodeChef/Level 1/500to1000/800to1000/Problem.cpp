// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PR0BLEM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n<m){
            while(n<m){
                m--;
                n+=3;
            }
        }
        if(n>m){
            while(n>m){
                n--;
                m++;
            }
        }
        if(n==m) cout << "YES\n";
        else cout << "NO\n";
    }
}