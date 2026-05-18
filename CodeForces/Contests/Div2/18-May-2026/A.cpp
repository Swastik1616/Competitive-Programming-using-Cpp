// Problem Link - https://codeforces.com/contest/2230/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n,a,b;
        cin >> n >> a >> b;
        long long ans = 0;
        if(n<=3) ans = min(n*a,b);
        else ans = min(n*a,min((n/3)*b + (n%3)*a,(n/3)*b + b));
        cout << ans << "\n";
    }
    return 0;
}
