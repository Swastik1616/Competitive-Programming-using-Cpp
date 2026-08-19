// Problem Link - https://www.codechef.com/START252D/problems/ODDEVEN7

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
        int ec = 0, oc = 0;
        for(auto it:v){
            if(it&1) oc++;
            else ec++;
        }
        if(oc==ec) cout << n << "\n";
        else cout << 2*min(oc,ec) + 1 << "\n";
    }
}
