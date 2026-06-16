// Problem Link - https://codeforces.com/contest/71/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if(n<=10) cout << s << "\n";
        else{
            string ans = "";
            ans += s[0];
            int d = n-2;
            ans += to_string(d);
            ans += s[n-1];
            cout << ans << "\n";   
        }
    }
    return 0;
}