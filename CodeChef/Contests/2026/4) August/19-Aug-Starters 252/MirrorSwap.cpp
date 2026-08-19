// Problem Link - https://www.codechef.com/START252D/problems/MRSWAP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(2*n);
        for(auto &it:v) cin >> it;
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += max(v[i],v[2*n-1-i]);
        }
        cout << ans << "\n";
    }
}
