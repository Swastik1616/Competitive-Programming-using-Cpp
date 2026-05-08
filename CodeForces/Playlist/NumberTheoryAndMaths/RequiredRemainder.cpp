// Problem Link - https://codeforces.com/problemset/problem/1374/A

// k = max integer b/w 0 to n such that k%x=y
// k = mx + y
// mx <= n -> k is ans
// if mx> n -> k-x is ans

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long x,y,n;
        cin >> x >> y >> n;
        long long highestMultiple = (n/x)*x;
        long long ans = highestMultiple + y;
        if(ans<=n) cout << ans << "\n";
        else cout << ans - x << "\n";
    }
    return 0;
}