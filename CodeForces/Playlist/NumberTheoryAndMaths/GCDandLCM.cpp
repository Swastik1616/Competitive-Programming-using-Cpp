// Problem Link - https://codeforces.com/problemset/problem/1665/A

// a+b+c+d = n
// gcd(a,b) = lcm(c,d) = 1
// c=d=1, b=1, a = n-3;

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << n-3 << " " << 1 << " " << 1 << " " << 1 << "\n";
    }
    return 0;
}