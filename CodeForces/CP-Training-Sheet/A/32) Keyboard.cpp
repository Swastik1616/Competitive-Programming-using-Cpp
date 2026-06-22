// Problem Link - https://codeforces.com/contest/474/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin >> c;
    string s;
    cin >> s;
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < s.length(); i++) {
        int pos = k.find(s[i]);
        if (c == 'R') cout << k[pos - 1];
        else cout << k[pos + 1];
    }
    cout << "\n";

    return 0;
}