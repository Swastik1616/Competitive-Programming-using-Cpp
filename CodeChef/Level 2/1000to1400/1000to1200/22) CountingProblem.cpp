// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/COUNTP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it:v) cin >> it;
        int oc = 0;
        int s = 0;
        for(auto it:v){
            if(it&1) oc++;
            s += it;
        }
        if(s%2==0 && oc>0) cout << "YES\n";
        else cout << "NO\n";
    }
}